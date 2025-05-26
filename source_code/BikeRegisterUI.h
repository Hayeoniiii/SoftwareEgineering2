#ifndef BIKEREGISTERUI_H
#define BIKEREGISTERUI_H


class BikeRegisterUI {
    BikeRegisterUI();
public:
    static BikeRegisterUI& getInstance();
    void display();
};

#endif // BIKEREGISTERUI_H
