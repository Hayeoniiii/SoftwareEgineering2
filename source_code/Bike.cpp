#include "Bike.h"

std::vector<Bike*> Bike::bikes;

Bike::Bike(const std::string& id, const std::string& name)
	: bikeID(id), bikeName(name),isRented(false) {
}

bool Bike::AddBike(const std::string& id, const std::string& name) {					 
	bikes.push_back(new Bike(id, name));
	return true;
}

const std::vector<Bike*>& Bike::GetBikes() {
	return bikes;
}

Bike* Bike::FindBike(const std::string& id) {
	for (auto b : bikes) {
		if (b->bikeID == id)
			return b;
	}
	//return nullptr;
}

bool Bike::UpdateToRent(const std::string& id) {
	Bike* b = FindBike(id);
	//if (!b || b->isRented) return false;
	b->isRented = true;
	return true;
}

const std::string& Bike::GetBikeID() const {
	return bikeID;
}

const std::string& Bike::GetBikeName() const {
	return bikeName;
}

bool Bike::IsRented() const {
	return isRented;
}