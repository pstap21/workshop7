#include "Appliance.h"

// Default constructor
Appliance::Appliance() : powerRating(0), isOn(false) {}

// Parameterized constructor
Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

// Setters
void Appliance::set_powerRating(int pr) {
    powerRating = pr;
}

void Appliance::set_isOn(bool status) {
    isOn = status;
}

// Getters
int Appliance::get_powerRating() const {
    return powerRating;
}

bool Appliance::get_isOn() const {
    return isOn;
}

// Methods to control power state
void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}

// Virtual function for power consumption
double Appliance::getPowerConsumption() const {
    return 0.0;
}
