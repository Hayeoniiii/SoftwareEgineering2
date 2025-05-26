#include "LoginUI.h"
#include "Login.h"
#include <fstream>
#include <string>

class LogIn;

extern std::ifstream in_fp;
extern std::ofstream out_fp;
																		  
static LogIn loginControl;

LoginUI::LoginUI()
	:loginControl(new LogIn()) {
}

LoginUI::~LoginUI() {
	delete loginControl;
}
