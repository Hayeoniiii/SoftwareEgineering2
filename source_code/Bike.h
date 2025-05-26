#ifndef BIKE_H
#define BIKE_H

#include <string>

class Bike {
    std::string bikeID;
    std::string bikeMaker;
    bool rented;
public:
    Bike(const string& id, const string& maker);
    std::string getID() const;
    std::string getMaker() const;
    bool isRented() const;
    void setRented(bool r);
};

#endif // BIKE_H
