#include "BikeRegisterUI.h"
#include "RegisterBike.h"
#include <fstream>
#include <string>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

BikeRegisterUI::BikeRegisterUI()
	:registerControl(new RegisterBike()) {
}

BikeRegisterUI::~BikeRegisterUI() {
	delete registerControl;
}