#include "UserInfo.h"

std::vector<UserInfo*> UserInfo::users;

UserInfo::UserInfo(const std::string& id, const std::string& password, const std::string& phonenumber)
	:userID(id), userPassword(password), userPhoneNumber(phonenumber) {}

bool UserInfo::AddUser(const std::string& id, const std::string& password, const std::string& phonenumber) {
	users.push_back(new UserInfo(id, password, phonenumber));
	return true;
}

bool UserInfo::ValidateUser(const std::string& id, const std::string& password) {
	for (auto u : users) {
		if (u->userID == id && u->userPassword == password)
			return true;
		return false;
	}
}

UserInfo* UserInfo::FindUser(const std::string& id) {
	for (auto u : users)
		if (u->userID == id)
			return u;
}

const std::vector<UserInfo*>& UserInfo::GetUsers() {
	return users;
}													

const std::string& UserInfo::GetUserID() const {
	return userID;
}