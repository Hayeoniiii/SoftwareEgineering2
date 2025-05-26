#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

class RentBikeUI {
    RentBikeUI();
public:
    static RentBikeUI& getInstance();
    void display();
};

#endif // RENTBIKEUI_H
