#ifndef SIGNUP_H
#define SIGNUP_H

#include <string>

class SignUp {
public:
	bool RequestSignup(const std::string& id, const std::string& password, const std::string& phonenumber);
};

#endif
