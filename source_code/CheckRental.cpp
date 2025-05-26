#include "CheckRental.h"
using namespace std;

CheckRental::CheckRental() {}

CheckRental& CheckRental::getInstance() {
    static CheckRental inst;
    return inst;
}

vector<Bike*> CheckRental::requestRental() {
    User* u = Login::getInstance().getCurrentUser();
    if (u) return u->getRentedBikes();
    return {};
}
