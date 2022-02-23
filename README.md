# simple_wheelpilot
remote controled wheelpilot for 200 €

# Hardware
- Stepper controller TB6600
- Stepper Motor 17HS4401
- Arduino UNO R3
- Mechanical things for connecting to wheel

# Prices
- Stepper controller and motor: 27 € => https://www.amazon.de/gp/product/B07FKJK1H9
- RC Receiver with 4 channels:  30 € => https://www.amazon.de/gp/product/B07PD9WKNG
- Arduino Uno R3:               15 € => https://www.amazon.de/gp/product/B01EWOE0UU
- Pulley:                        8 € => https://www.amazon.de/gp/product/B08ZSHM49D
- Toothed Belt:                 10 € => https://www.amazon.de/gp/product/B07D91XLJC
- Mechanical things for Wheel:  80 € => https://www.ebay.de/itm/185154514004
- Other                         30 €

# Details
Stepper controller TB6600
- Switch 1..3: OFF,OFF,OFF  => 32 Microsteps, 6400 Pulses/rev
- Switch 4..6: ON,OFF,ON    => Current 1A (1.2 Peak)

Stepper Motor Longrunner 17HS4401
- step angle        1.8 deg
- Motor length:     40 mm
- Rated current:    1.7 A
- Phase resitance:  1.5 ohm
- Phase inductance: 2.8 mH
- Holding torque:   40 N.cm Min
- Detent torque:    2.2 N.cm Max
- Rotor inertia:    54 g.cm²
- Lead wire:        4
- Motor weight:     280 g
- Colours
     A: Black, /A: Green
     B: Red  , /B: Blue
     
![grafik](https://user-images.githubusercontent.com/98450191/155411801-f6608bc8-dd80-48ad-966e-63ac4f081977.png)

# Mechanical ideas
  # Wheel side
  Brought 3 slices of aluminium plates => https://www.ebay.de/itm/185154514004
  - 2 x 300 mm outer diameter and 3 mm thickness (to have a lead of the toothed belt)
  - 1 x 250 mm outer diameter and 8 mm thickness
  First drill a centric hole in all 3 slices and connect all (250 mm diameter in the middle) via a screw.
  Now drill holes in outer diameter (diameter 220 mm) and connect all to an sandwidtch again via screws.
  After removing the screw in the middle make enlarge the centric hole that it fits to the axis of the wheel.
  Now remove the wheel, insert the sandwidtch and mount the wheel again.
  Next step is connecting the sandwidch to the wheel via additional screws.
  With that there should be a solid connection between the motor and the wheel.
  
  # Motor side
  The motor have to have the correct position that the belt can running free.

  # Clamping device
  On one side of the belt near the motor an additional role is needed.
  On the other side a role is needed too but have to be flexible to have a kind of clutch.

# TODO
- a lot

# Further ideas
- the 2 channels left to have an remote control for bow thruster
- using 8 channel remote control for other things like anchor windlass and engine
- automatic navigation
    
