#ifndef SIGNUPUI_H
#define SIGNUPUI_H


class SignUpUI {
    SignUpUI();
public:
    static SignUpUI& getInstance();
    void display();
};

#endif // SIGNUPUI_H
