#include "SignUpUI.h"
#include "Signup.h"
#include <fstream>
using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;

SignUpUI::SignUpUI() {}

SignUpUI& SignUpUI::getInstance() {
    static SignUpUI inst;
    return inst;
}

void SignUpUI::display() {
    out_fp << "1.1. 회원가입\n";
    string id, pw, phone;
    in_fp >> id >> pw >> phone;
    out_fp << "> " << id << " " << pw << " " << phone << "\n";
    Signup::getInstance().requestSignUp(id, pw, phone);
}
