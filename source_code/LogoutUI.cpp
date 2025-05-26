#include "LogoutUI.h"
#include "Logout.h"
#include <fstream>
using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;

LogoutUI::LogoutUI() {}

LogoutUI& LogoutUI::getInstance() {
    static LogoutUI inst;
    return inst;
}

void LogoutUI::display() {
    out_fp << "2.2. 로그아웃\n";
    User* u = Login::getInstance().getCurrentUser();
    string id = u ? u->getID() : "";
    out_fp << "> " << id << "\n";
    Logout::getInstance().requestLogout();
}
