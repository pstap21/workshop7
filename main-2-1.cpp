#include <iostream>
#include "Fridge.h"

int main() {
    Fridge f1(200, 300);  // 200 watts, 300L fridge
    f1.turnOn();

    std::cout << "Fridge Volume: " << f1.getVolume() << " L\n";
    std::cout << "Fridge Power Consumption: " << f1.getPowerConsumption() << " Wh\n";

    return 0;
}
