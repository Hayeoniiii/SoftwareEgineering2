#ifndef BIKE_H
#define BIKE_H

#include <string>
#include <vector>

class Bike {
private:
	std::string bikeID;
	std::string bikeName;
	bool isRented;

	static std::vector<Bike*> bikes;
public:
	Bike(const std::string& id, const std::string& name);

	static bool AddBike(const std::string& id, const std::string& name);

	static const std::vector<Bike*>& GetBikes();

	static Bike* FindBike(const std::string& id);
	static bool UpdateToRent(const std::string& id);

	const std::string& GetBikeID() const;
	const std::string& GetBikeName() const;
	bool IsRented() const;
										
};

#endif
