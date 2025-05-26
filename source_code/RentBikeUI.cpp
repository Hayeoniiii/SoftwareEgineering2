#include "RentBikeUI.h"
#include "RentBike.h"
#include <fstream>
using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;

RentBikeUI::RentBikeUI() {}

RentBikeUI& RentBikeUI::getInstance() {
    static RentBikeUI inst;
    return inst;
}

void RentBikeUI::display() {
    out_fp << "4.1. 자전거 대여\n";
    string id, maker;
    in_fp >> id >> maker;
    out_fp << "> " << id << " " << maker << "\n";
    RentBike::getInstance().requestRent(id, maker);
}
