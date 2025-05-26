#ifndef SIGNUP_H
#define SIGNUP_H

#include <vector>
#include "User.h"

class Signup {
    vector<User*> users;
    Signup();
public:
    static Signup& getInstance();
    bool requestSignUp(const string& id,
                       const string& pw,
                       const string& phone);
    const vector<User*>& getUsers() const;
};

#endif // SIGNUP_H
