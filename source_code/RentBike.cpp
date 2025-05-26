#include "RentBike.h"
using namespace std;

RentBike::RentBike() {}

RentBike& RentBike::getInstance() {
    static RentBike inst;
    return inst;
}

bool RentBike::requestRent(const string& id,
                           const string& maker) {
    User* u = Login::getInstance().getCurrentUser();
    if (!u) return false;
    for (auto b : RegisterBike::getInstance().getBikes()) {
        if (b->getID() == id &&
            b->getMaker() == maker &&
            !b->isRented()) {
            b->setRented(true);
            u->addRental(b);
            return true;
        }
    }
    return false;
}
