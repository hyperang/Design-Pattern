#ifndef VEHICLEFACTORY_HPP
#define VEHICLEFACTORY_HPP

#include "vehicle.hpp"
#include <memory>

class VehicleFactory
{
public:
	virtual std::unique_ptr<Vehicle> makeVehicle(std::string type) = 0;
};

#endif