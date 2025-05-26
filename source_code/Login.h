#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include "UserInfo.h"

class LogIn {
public: 
	UserInfo* RequestLogin(const std::string& id, const std::string& password);
};

#endif