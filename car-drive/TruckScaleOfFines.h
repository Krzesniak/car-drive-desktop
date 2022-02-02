#pragma once
#include "ScaleOfFines.h"

class TruckScaleOfFines : public ScaleOfFines {
public:
    TruckScaleOfFines(int speed);

    virtual ~TruckScaleOfFines();

private:
    std::pair<int, int> policzGrzywne(int speedExceeded) override;

    int policzOIlePrzekroczonoPredkosc(Stale::RodzajDrogi roadType) override;

};