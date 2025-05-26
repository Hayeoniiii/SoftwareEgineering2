#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include "User.h"

class Login {
    User* currentUser;
    Login();
public:
    static Login& getInstance();
    bool requestLogin(const string& id, const string& pw);
    User* getCurrentUser() const;
    void clear();
};

#endif // LOGIN_H
