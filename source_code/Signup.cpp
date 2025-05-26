#include "Signup.h"
using namespace std;

Signup::Signup() {}

Signup& Signup::getInstance() {
    static Signup inst;
    return inst;
}

bool Signup::requestSignUp(const string& id,
                           const string& pw,
                           const string& phone) {
    for (auto u : users)
        if (u->getID() == id) return false;
    users.push_back(new User(id, pw, phone));
    return true;
}

const vector<User*>& Signup::getUsers() const {
    return users;
}
