#include "LogoutUI.h"
#include "Logout.h"
#include "UserInfo.h"
#include <fstream>
#include <string>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

extern UserInfo* currentUser;

LogoutUI::LogoutUI()
	: logoutControl(new LogOut())
{
}

LogoutUI::~LogoutUI() {
	delete logoutControl;
}

