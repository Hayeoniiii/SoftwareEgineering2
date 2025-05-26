#include "Login.h"
#include "UserInfo.h"


UserInfo* LogIn::RequestLogin(const std::string& id, const std::string& password) {
	if (UserInfo::ValidateUser(id, password)) {
		return UserInfo::FindUser(id);
	}
}								
