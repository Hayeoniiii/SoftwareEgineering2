#ifndef REGISTERBIKE_H
#define REGISTERBIKE_H

#include <string>

class RegisterBike {
public:
	bool RequestRegisterBike(const std::string& id, const std::string& name);
};

#endif