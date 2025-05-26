#include "Signup.h"
#include "UserInfo.h"

bool SignUp::RequestSignup(const std::string& id, const std::string& password, const std::string& phonenumber) {
	return UserInfo::AddUser(id, password, phonenumber);
}