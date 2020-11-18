
#include <iostream>
#include "../src/Units.h"

int main(int argc, char const *argv[])
{
	Measurement<UnitLength> km(1234, UnitLength::kilometers());
    std::cout << km.description() << std::endl;

    Measurement<UnitLength> feet = km.convertedTo(UnitLength::feet());
    std::cout << feet.description() << std::endl;
    
    return 0;
}
