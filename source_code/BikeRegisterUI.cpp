#include "BikeRegisterUI.h"
#include "RegisterBike.h"
using namespace std;

BikeRegisterUI::BikeRegisterUI() {}

BikeRegisterUI& BikeRegisterUI::getInstance() {
    static BikeRegisterUI inst;
    return inst;
}

void BikeRegisterUI::display() {
    out_fp << "3.1. 자전거 등록\n";
    string id, maker;
    in_fp >> id >> maker;
    out_fp << "> " << id << " " << maker << "\n";
    RegisterBike::getInstance().requestBikeRegister(id, maker);
}
