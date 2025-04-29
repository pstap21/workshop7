#include <iostream>
#include "Appliance.h"

int main() {
    Appliance a1;                  
    Appliance a2(1500);            

    std::cout << "Appliance 1 - Power: " << a1.get_powerRating()
              << ", Is On: " << a1.get_isOn() << "\n";

    std::cout << "Appliance 2 - Power: " << a2.get_powerRating()
              << ", Is On: " << a2.get_isOn() << "\n";

    a2.turnOn();
    std::cout << "After turning on Appliance 2 - Is On: " << a2.get_isOn() << "\n";

    std::cout << "Power consumption (virtual): " << a2.getPowerConsumption() << " W\n";

    return 0;
}
