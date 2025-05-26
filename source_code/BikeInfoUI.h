#ifndef BIKEINFOUI_H
#define BIKEINFOUI_H


class BikeInfoUI {
    BikeInfoUI();
public:
    static BikeInfoUI& getInstance();
    void display();
};

#endif // BIKEINFOUI_H
