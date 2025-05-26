#ifndef REGISTERBIKE_H
#define REGISTERBIKE_H

#include <fstream>
#include <vector>
#include "Bike.h"

extern ifstream in_fp;
extern ofstream out_fp;

class RegisterBike {
    vector<Bike*> bikes;
    RegisterBike();
public:
    static RegisterBike& getInstance();
    bool requestBikeRegister(const string& id,
                             const string& maker);
    const vector<Bike*>& getBikes() const;
};

#endif // REGISTERBIKE_H
