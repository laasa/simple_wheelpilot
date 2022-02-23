# simple_wheelpilot
remote controled wheelpilot for 200 €

# Hardware
- Stepper controller TB6600: 
- Stepper Motor 17HS4401

# Prices
- Stepper controller and motor: 27 € => https://www.amazon.de/gp/product/B07FKJK1H9/ref=ppx_yo_dt_b_asin_title_o00_s01?ie=UTF8&psc=1
- RC Receiver with 4 channels:  30 € => https://www.amazon.de/gp/product/B07PD9WKNG/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1
- Arduino Uno R3:               15 € => https://www.amazon.de/gp/product/B01EWOE0UU/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1
- Pulley:                        8 € => https://www.amazon.de/gp/product/B08ZSHM49D/ref=ppx_yo_dt_b_asin_title_o02_s01?ie=UTF8&psc=1
- Belt:                         10 € => https://www.amazon.de/gp/product/B07D91XLJC/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1
- Mechanical things for Wheel:  80 € => https://www.ebay.de/itm/185154514004
- Other                         30 €


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
