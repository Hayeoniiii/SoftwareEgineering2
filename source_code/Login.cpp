#include "Login.h"
#include "Signup.h"
using namespace std;

Login::Login() : currentUser(nullptr) {}

Login& Login::getInstance() {
    static Login inst;
    return inst;
}

bool Login::requestLogin(const string& id, const string& pw) {
    for (auto u : Signup::getInstance().getUsers()) {
        if (u->getID() == id && u->getPassword() == pw) {
            currentUser = u;
            return true;
        }
    }
    return false;
}

User* Login::getCurrentUser() const {
    return currentUser;
}

void Login::clear() {
    currentUser = nullptr;
}
