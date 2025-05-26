#ifndef LOGOUT_H
#define LOGOUT_H

#include "Login.h"

class Logout {
    Logout();
public:
    static Logout& getInstance();
    bool requestLogout();
};

#endif // LOGOUT_H
