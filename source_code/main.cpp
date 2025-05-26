#include <fstream>
#include <iostream>
#include <string>
#include "SignupUI.h"
#include "LoginUI.h"
#include "Signup.h"
#include "Login.h"
#include "UserInfo.h"
#include "LogoutUI.h"
#include "Logout.h"
#include "BikeRegisterUI.h"
#include "RegisterBike.h"
#include "Bike.h"
#include "RentBike.h"
#include "RentBikeUI.h"
#include "CheckRental.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
//#define INPUT_FILE_NAME "C:/Users/hayeo/source/repos/hw2/hw2/x64/Debug/input.txt"
//#define OUTPUT_FILE_NAME "C:/Users/hayeo/source/repos/hw2/hw2/x64/Debug/output.txt"


using namespace std;

void doTask();
void Signup();
void Login();
void Logout();
void BikeRegister();
void BikeRent();
void ShowRentalInfo();
void program_exit();

ofstream out_fp;
ifstream in_fp;

static SignUp SignupControl;
static LogIn loginControl;
static LogOut logoutControl;
static RegisterBike registerControl;
static RentBike rentControl;
static CheckRental checkControl;
UserInfo* currentUser = nullptr;

void Signup() {
	std::string id, pw, phonenumber;

	in_fp >> id >> pw >> phonenumber;

	SignupControl.RequestSignup(id, pw, phonenumber);

	out_fp << "1.1 회원가입\n";
	out_fp << ">" << id << " " << pw << " " << phonenumber << "\n\n";
}


void Login() {
	std::string id, pw;

	in_fp >> id >> pw;

	currentUser=loginControl.RequestLogin(id, pw);

	out_fp << "2.1 로그인\n";
	out_fp << ">" << id << " " << pw << "\n\n";
}

void Logout() {
	if (currentUser != nullptr) {
		std::string prevID = currentUser->GetUserID();
		bool success = logoutControl.RequestLogout();

		if (success) {
			currentUser = nullptr;

			out_fp << "2.2 로그아웃\n";
			out_fp << ">" << prevID << "\n\n";
		}
	}
}

void BikeRegister() {
	std::string id, name;
	in_fp >> id >> name;

	bool success = registerControl.RequestRegisterBike(id, name);

	out_fp << "3.1 자전거 등록\n";
	out_fp << ">" << id << " " << name << "\n\n";
}

void BikeRent() {
	std::string id;
	in_fp >> id;

	bool success = rentControl.RequestRent(id);
	if (success) {
		Bike* b = Bike::FindBike(id);
		out_fp << "4.1 자전거 대여\n";
		out_fp << ">" << b->GetBikeID() << " " << b->GetBikeName() << "\n\n";
	}
}

void ShowRentalInfo() {
	auto list = checkControl.RequestRentalInfo();

	out_fp << "5.1 자전거 대여 리스트\n";

	for (auto b : list) {
		out_fp << ">" << b->GetBikeID() << " " << b->GetBikeName() << "\n";
	}							 
	out_fp << "\n";
}

bool exitFlag = false;

void program_exit() {
	out_fp << "6.1 종료\n";
	exitFlag = 1;
}

int main() {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	UserInfo::AddUser("admin", "admin", "00000000000");

	doTask();

	out_fp.close();
	in_fp.close();

	return 0;
}

void doTask() {
	int menu_level_1 = 0, menu_level_2 = 0;

	while (!exitFlag)
	{
		in_fp >> menu_level_1 >> menu_level_2;

		switch (menu_level_1) {
		case 1:
			switch (menu_level_2) {
			case 1:
				Signup();
				break;
			}
			break;
		case 2:
			switch (menu_level_2) {
			case 1: {
				Login();
				break;
			}
			case 2: {
				Logout();

				break;
			}
			}
			break;
		case 3: 
			switch (menu_level_2) {
			case 1: {
				BikeRegister();

				break;
			}
			}
			break;
		case 4:
			switch (menu_level_2) {
			case 1: {
				BikeRent();

				break;
			}
			}
			break;
		case 5:
			switch (menu_level_2) {
			case 1: {
				ShowRentalInfo();

				break;

			}
			}
			break;
		case 6:
			switch (menu_level_2) {
			case 1: {
				program_exit();

				break;
			}
			}
			break;
		}
	}
}
