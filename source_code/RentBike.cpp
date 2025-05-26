#include "RentBike.h"
#include "Bike.h"
#include "UserInfo.h"

extern UserInfo* currentUser;

bool RentBike::RequestRent(const std::string& id) {
	if (Bike::UpdateToRent(id))
		return true;
}