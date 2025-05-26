#include "SignupUI.h"
#include "Signup.h"
#include <iostream>
#include <fstream>
#include <string>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

static SignUp SignupControl;

SignupUI::SignupUI() {
	SignupControl = new SignUp();
}

SignupUI::~SignupUI() {
	delete SignupControl;
}

