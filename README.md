## Units

A simple c++ unit library based on Apple's NSMeasurement and NSUnit. A sample program can be found in the `./test` folder, use the Makefile to build it.

### Simple usage:

```
#include <iostream>
#include "Units.h"

int main(int argc, char const *argv[])
{
	Measurement<UnitLength> km(1234, UnitLength::kilometers());
    std::cout << km.description() << std::endl;

    Measurement<UnitLength> feet = km.convertedTo(UnitLength::feet());
    std::cout << feet.description() << std::endl;
    
    return 0;
}
```

### Contributions welcomed

This library contains only a handful of units that I personally needed for other projects. Feel free to contribute and add more. It's very simple, you just need to know correct values. 

Missing units:

- UnitAcceleration
- UnitAngle
- UnitArea
- UnitConcentrationMass
- UnitDispersion
- UnitElectricCharge
- UnitElectricCurrent
- UnitElectricPotentialDifference
- UnitElectricResistance
- UnitEnergy
- UnitFrequency
- UnitFuelEfficiency
- UnitInformationStorage
- UnitIlluminance
- UnitMass
- UnitPower
- UnitPressure
- UnitTemperature
- UnitVolume

Pedro Enrique  
Release Nov 18th, 2020  
MIT License  
