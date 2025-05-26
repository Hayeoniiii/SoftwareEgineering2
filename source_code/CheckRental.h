#ifndef CHECKRENTAL_H
#define CHECKRENTAL_H

#include <vector>
#include "Login.h"

class CheckRental {
    CheckRental();
public:
    static CheckRental& getInstance();
    vector<Bike*> requestRental();
};

#endif // CHECKRENTAL_H
