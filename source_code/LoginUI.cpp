#include "LoginUI.h"
#include "Login.h"
#include <fstream>
using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;

LoginUI::LoginUI() {}

LoginUI& LoginUI::getInstance() {
    static LoginUI inst;
    return inst;
}

void LoginUI::display() {
    out_fp << "2.1. 로그인\n";
    string id, pw;
    in_fp >> id >> pw;
    out_fp << "> " << id << " " << pw << "\n";
    Login::getInstance().requestLogin(id, pw);
}
