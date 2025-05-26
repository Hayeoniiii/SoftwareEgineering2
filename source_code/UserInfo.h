#ifndef USERINFO_H
#define USERINFO_H

#include <string>
#include <vector>

class UserInfo {
private:
	std::string userID;
	std::string userPassword;
	std::string userPhoneNumber;

	static std::vector<UserInfo*> users;
public:
	UserInfo(const std::string& id, const std::string& password, const std::string& phonenumber);

	static bool AddUser(const std::string& id, const std::string& password, const std::string& phonenumber);

	static bool ValidateUser(const std::string& id, const std::string& password);

	static UserInfo* FindUser(const std::string& id);

	static const std::vector<UserInfo*>& GetUsers();
	const std::string& GetUserID() const;

};

#endif
