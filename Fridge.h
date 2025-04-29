#ifndef FRIDGE_H
#define FRIDGE_H


#include "Appliance.h"

class Fridge : public Appliance {
    private:

    double volume; //in litres

    public:

Fridge();
Fridge( int powerRating, double volume);



void setVolume(double v);
double getVolume() const;


double getPowerConsumption() const override;

};

#endif