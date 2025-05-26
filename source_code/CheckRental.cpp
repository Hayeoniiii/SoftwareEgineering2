#include "CheckRental.h"

std::vector<Bike*> CheckRental::RequestRentalInfo() {
	std::vector<Bike*> rented;

	for (auto b : Bike::GetBikes()) {
		if (b->IsRented()) {
			rented.push_back(b);
		}
	}
	return rented;
}