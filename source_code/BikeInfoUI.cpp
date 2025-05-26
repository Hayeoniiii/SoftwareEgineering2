#include "BikeInfoUI.h"
#include "CheckRental.h"
#include "Bike.h"  
#include <fstream>
using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;

BikeInfoUI::BikeInfoUI() {}

BikeInfoUI& BikeInfoUI::getInstance() {
    static BikeInfoUI inst;
    return inst;
}

void BikeInfoUI::display() {
    out_fp << "5.1. 자전거 대여 리스트\n";
    auto list = CheckRental::getInstance().requestRental();
    for (auto b : list) {
        out_fp << "> " << b->getID() << " " << b->getMaker() << "\n";
    }
}
