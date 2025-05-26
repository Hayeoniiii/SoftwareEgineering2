#include "RegisterBike.h"
using namespace std;

RegisterBike::RegisterBike() {}

RegisterBike& RegisterBike::getInstance() {
    static RegisterBike inst;
    return inst;
}

bool RegisterBike::requestBikeRegister(const string& id,
                                       const string& maker) {
    for (auto b : bikes)
        if (b->getID() == id) return false;
    bikes.push_back(new Bike(id, maker));
    return true;
}

const vector<Bike*>& RegisterBike::getBikes() const {
    return bikes;
}
