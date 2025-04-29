#include "Fridge.h"


//constructor
Fridge::Fridge() : Appliance(), volume(0.0) {}


Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}

void Fridge::setVolume(double v) {
    volume = v;
}

double Fridge::getVolume() const {
    return volume;
}


double Fridge::getPowerConsumption() const {
    return get_powerRating() * 24 * (volume / 100.0);
}
