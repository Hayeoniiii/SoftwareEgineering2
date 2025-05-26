#ifndef CHECKRENTAL_H
#define CHECKRENTAL_H

#include <vector>
#include "Bike.h"

class CheckRental {
public:
	std::vector<Bike*> RequestRentalInfo();
};

#endif
