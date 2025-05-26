#ifndef LOGINUI_H
#define LOGINUI_H


class LoginUI {
    LoginUI();
public:
    static LoginUI& getInstance();
    void display();
};

#endif // LOGINUI_H
