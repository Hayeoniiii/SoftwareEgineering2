#include "Logout.h"
#include "UserInfo.h"

extern UserInfo* currentUser;

bool LogOut::RequestLogout() {
	if (currentUser) {
		currentUser = nullptr;
		return true;
	}
	return false;
}