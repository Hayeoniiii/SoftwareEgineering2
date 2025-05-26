#include "Logout.h"
using namespace std;

Logout::Logout() {}

Logout& Logout::getInstance() {
    static Logout inst;
    return inst;
}

bool Logout::requestLogout() {
    if (Login::getInstance().getCurrentUser()) {
        Login::getInstance().clear();
        return true;
    }
    return false;
}
