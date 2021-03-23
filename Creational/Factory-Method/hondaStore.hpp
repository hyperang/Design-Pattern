#ifndef HONDASTORE_HPP
#define HONDASTORE_HPP

#include "vehicleFactory.hpp"
#include "vehicleStore.hpp"
#include "hondaCivicTypeR.hpp"

class HondaStore : public VehicleFactory, VehicleStore
{
public:
	std::unique_ptr<Vehicle> makeVehicle(std::string type)
	{
		std::unique_ptr<Vehicle> vehicle = nullptr;

		if(type == "honda civic type r")
		{
			vehicle = std::make_unique<HondaCivicTypeR>();
		}

		return vehicle;
	}

	std::unique_ptr<Vehicle> orderVehicle(std::string type)
	{
		auto vehicle = makeVehicle(type);

		return vehicle;
	}
};

#endif