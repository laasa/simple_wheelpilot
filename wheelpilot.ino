
// TB6600: Switch 1..3: OFF,OFF,OFF  => 32 Microsteps, 6400 Pulses/rev
//         Switch 4..6: ON,OFF,ON    => Current 1A (1.2 Peak)

// Motor is Longrunner 17HS4401
//         step angle        1.8 deg
//         Motor length:     40 mm
//         Rated current:    1.7 A
//         Phase resitance:  1.5 ohm
//         Phase inductance: 2.8 mH
//         Holding torque:   40 N.cm Min
//         Detent torque:    2.2 N.cm Max
//         Rotor inertia:    54 g.cm²
//         Lead wire:        4
//         Motor weight:     280 g
//         A: Black, /A: Green
//         B: Red  , /B: Blue



// set pin numbers:
const int ENA_Pin =  6;            // pin connected to ENAble+ of TB6600
const int DIR_Pin =  5;            // pin connected to DIRection+ of TB6600
const int PUL_Pin =  4;            // pin connected to PULse+ of TB6600

const int BB_Pin =  3;             // pin connected to BB relais of RC remote receiver (switched to 3,3 Volt from Arduino)
const int SB_Pin =  2;             // pin connected to SB relais of RC remote receiver (switched to 3,3 Volt from Arduino)

const int ledPin =  13;            // the number of the LED pin on Arduino

const int defaultPulse = 4000;     // pulses on idle: 2*4000 µs = 8000 µs = 0,8 ms => 1,25 kHz

// Variables will change:
int ledState = LOW;               // ledState used to set the LED

int Up = 0;
int Counter = 0;
int BB = 0, lastBB = 0;
int SB = 0, lastSB = 0;
int pulseDelay = defaultPulse;

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);      
  
  pinMode(BB_Pin, INPUT_PULLUP);  // input from RC remote receiver
  pinMode(SB_Pin, INPUT_PULLUP);  // input from RC remote receiver
  
  pinMode(ENA_Pin, OUTPUT);      
  pinMode(DIR_Pin, OUTPUT);      
  pinMode(PUL_Pin, OUTPUT);      

  digitalWrite(ENA_Pin, LOW);  // Enable drive
  digitalWrite(DIR_Pin, LOW);  // 
  digitalWrite(PUL_Pin, LOW);
}

void loop()
{ 
  // read inputs from RC remote receiver
  BB = digitalRead(BB_Pin);
  SB = digitalRead(SB_Pin);
  
  if ( BB && !lastBB )
  { // start of backboard command
    pulseDelay = 2000;
    digitalWrite(DIR_Pin, LOW);
  }
  if ( SB && !lastSB )
  { // start of steyrboard command
    pulseDelay = 2000;
    digitalWrite(DIR_Pin, HIGH);
  }
  
  if ( !SB & !BB )
  {  // no direction button is pressed
  
    // switch LED off
    digitalWrite(ledPin, LOW);   
    
    // use default pulse frequency
    pulseDelay = defaultPulse;
    
    // toggle direction every 50 pulses (40 ms)
    if ( ++Counter > 50 )
    {
      Up = Up ? 0 : 1;
      if ( Up )
        digitalWrite(DIR_Pin, HIGH);
      else
        digitalWrite(DIR_Pin, LOW);
  
      Counter = 0;
    }
  }
  else
  {  // an direction button is pressed
  
    // switch LED on
    digitalWrite(ledPin, HIGH);   
    
    // increase the pulse frequency ..
    pulseDelay -= 2;
    // .. till maximum of 10 kHz (T=100 µs)
    if ( pulseDelay < 50 )
      pulseDelay = 50;
  }

  // needed for edge detection
  lastBB = BB;
  lastSB = SB;

  // generate the pulse with the given frequency
  digitalWrite(PUL_Pin, HIGH);
  delayMicroseconds(pulseDelay);
  digitalWrite(PUL_Pin, LOW);
  delayMicroseconds(pulseDelay);

}
