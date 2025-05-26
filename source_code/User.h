#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class Bike;  // 전방 선언

class User {
    string userID;
    string userPassword;
    string userPhone;
    vector<Bike*> rentedBikes;
public:
    User(const string& id,
         const string& pw,
         const string& phone);
    const string& getID() const;
    const string& getPassword() const;
    void addRental(Bike* b);
    const vector<Bike*>& getRentedBikes() const;
};

#endif // USER_H
