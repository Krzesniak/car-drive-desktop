#include "TruckScaleOfFines.h"


int TruckScaleOfFines::policzOIlePrzekroczonoPredkosc(Stale::RodzajDrogi roadType) {
    switch (roadType) {

    case Stale::STREFA_ZAMIESZKANIA:
        return this->speed - 20;
    case Stale::OBSZAR_ZABUDOWANY:
        return this->speed - 50;
    case Stale::DROGA_JEDNOJEZDNIOWA:
        return this->speed - 70;
    case Stale::DROGA_DWUJEZDNIOWA:
        return this->speed - 80;
    case Stale::DROGA_JEDNOJEZDNIOWA_EKSPRESOWA:
        return this->speed - 100;
    case Stale::DROGA_DWUJEZDNIOWA_EKSPRESOWA:
        return this->speed - 100;
    case Stale::AUTOSTRADA:
        return this->speed - 100;
    }
    return 0;
}

std::pair<int, int> TruckScaleOfFines::policzGrzywne(int speedExceeded) {

    if (speedExceeded < 0) return std::pair<int, int>(0, 0);
    else if (speedExceeded > 0 && speedExceeded <= 10) return std::pair<int, int>(0, 50);
    else if (speedExceeded > 10 && speedExceeded <= 20) return std::pair<int, int>(50, 100);
    else if (speedExceeded > 20 && speedExceeded <= 30) return std::pair<int, int>(100, 200);
    else if (speedExceeded > 30 && speedExceeded <= 40) return std::pair<int, int>(200, 300);
    else if (speedExceeded > 40 && speedExceeded <= 50) return std::pair<int, int>(300, 400);
    else return std::pair<int, int>(400, 500);
}
TruckScaleOfFines::TruckScaleOfFines(int speed) : ScaleOfFines(speed) {

}

TruckScaleOfFines::~TruckScaleOfFines() {

}
