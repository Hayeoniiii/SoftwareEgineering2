#include "Bike.h"
using namespace std;

Bike::Bike(const string& id, const string& maker)
  : bikeID(id), bikeMaker(maker), rented(false) {}

string Bike::getID() const     { return bikeID; }
string Bike::getMaker() const  { return bikeMaker; }
bool   Bike::isRented() const  { return rented; }
void   Bike::setRented(bool r) { rented = r; }
