#include "RentBike.h"
#include "RentBikeUI.h"
#include "Bike.h"
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

RentBikeUI::RentBikeUI()
	:rentControl(new RentBike()) {
}

RentBikeUI::~RentBikeUI() {
	delete rentControl;
}