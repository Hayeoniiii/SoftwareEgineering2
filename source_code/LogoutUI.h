#ifndef LOGOUTUI_H
#define LOGOUTUI_H

class LogoutUI {
    LogoutUI();
public:
    static LogoutUI& getInstance();
    void display();
};

#endif // LOGOUTUI_H
