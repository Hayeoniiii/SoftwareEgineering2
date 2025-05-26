#ifndef RENTBIKE_H
#define RENTBIKE_H

#include "Login.h"
#include "RegisterBike.h"

class RentBike {
    RentBike();
public:
    static RentBike& getInstance();
    bool requestRent(const string& id,
                     const string& maker);
};

#endif // RENTBIKE_H
