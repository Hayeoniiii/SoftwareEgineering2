#include "Bike.h"
#include "BikeInfoUI.h"
#include "CheckRental.h"
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

BikeInfoUI::BikeInfoUI()
	:checkControl(new CheckRental())
{}

BikeInfoUI::~BikeInfoUI() {
	delete checkControl;
}