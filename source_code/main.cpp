#include <fstream>
#include <string>
#include "SignUpUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "BikeRegisterUI.h"
#include "RentBikeUI.h"
#include "BikeInfoUI.h"

using namespace std;

ifstream in_fp("input.txt");
ofstream out_fp("output.txt");

void doTask();
void join();
void logIn();
void logOut();
void registerBike();
void rentBike();
void displayRentalList();
void programExit();


int main() {
    in_fp.open("input.txt");
    out_fp.open("output.txt");

    doTask();

    out_fp.close();
    in_fp.close();
    return 0;
}

void doTask() {
    int a = 0, b = 0;
    bool exitFlag = false;

    while (!exitFlag && (in_fp >> a >> b)) {
        switch (a) {
            case 1:
                if (b == 1) join();
                break;
            case 2:
                if      (b == 1) logIn();
                else if (b == 2) logOut();
                break;
            case 3:
                if (b == 1) registerBike();
                break;
            case 4:
                if (b == 1) rentBike();
                break;
            case 5:
                if (b == 1) displayRentalList();
                break;
            case 6:
                if (b == 1) {
                    programExit();
                    exitFlag = true;
                }
                break;
            default:
                break;
        }
    }
}

void join() {
    out_fp << "1.1. 회원가입\n";
    SignUpUI::getInstance().display();
}

void logIn() {
    out_fp << "2.1. 로그인\n";
    LoginUI::getInstance().display();
}

void logOut() {
    out_fp << "2.2. 로그아웃\n";
    LogoutUI::getInstance().display();
}

void registerBike() {
    out_fp << "3.1. 자전거 등록\n";
    BikeRegisterUI::getInstance().display();
}

void rentBike() {
    out_fp << "4.1. 자전거 대여\n";
    RentBikeUI::getInstance().display();
}

void displayRentalList() {
    out_fp << "5.1. 자전거 대여 리스트\n";
    BikeInfoUI::getInstance().display();
}

void programExit() {
    out_fp << "6.1. 종료\n";
}
