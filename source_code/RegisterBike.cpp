#include "RegisterBike.h"
#include "Bike.h"

bool RegisterBike::RequestRegisterBike(const std::string& id, const std::string& name) {
	return Bike::AddBike(id, name);
}