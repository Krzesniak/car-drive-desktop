#pragma once
#include <string>
#include "Constant.h"

class ScaleOfFines {
protected:
    int speed;
public:
    explicit ScaleOfFines(int speed) {
        this->speed = speed;
    }

    void setSpeed(int speed) {
        this->speed = speed;
    }

    virtual ~ScaleOfFines() {
    }

    std::pair<int, int> calculate(Stale::RodzajDrogi roadType) {
        int roznicaPredkosci = policzOIlePrzekroczonoPredkosc(roadType);
        return !czyPrzekroczonoPredkosc(roznicaPredkosci) ? std::pair<int, int>(0, 0) : policzGrzywne(roznicaPredkosci);
    }

    virtual std::pair<int, int> policzGrzywne(int speedExceeded) = 0;

    static bool czyPrzekroczonoPredkosc(int speed) {
        if (speed <= 0) return false;
        return true;
    }

    virtual int policzOIlePrzekroczonoPredkosc(Stale::RodzajDrogi roadType) = 0;


};

