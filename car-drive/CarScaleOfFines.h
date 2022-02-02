#pragma once
#include "ScaleOfFines.h"



class CarScaleOfFines : public ScaleOfFines {
public:
    CarScaleOfFines(int speed);

    virtual ~CarScaleOfFines();

private:
    std::pair<int, int> policzGrzywne(int speedExceeded) override;

    int policzOIlePrzekroczonoPredkosc(Stale::RodzajDrogi roadType) override;

};
