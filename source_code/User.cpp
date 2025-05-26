#include "User.h"
#include "Bike.h"
using namespace std;

User::User(const string& id,
           const string& pw,
           const string& phone)
  : userID(id), userPassword(pw), userPhone(phone) {}

const string& User::getID() const { return userID; }
const string& User::getPassword() const { return userPassword; }
void User::addRental(Bike* b) { rentedBikes.push_back(b); }
const vector<Bike*>& User::getRentedBikes() const { return rentedBikes; }
