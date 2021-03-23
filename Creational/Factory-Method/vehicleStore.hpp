#ifndef VEHICLESTORE_HPP
#define VEHICLESTORE_HPP

#include "vehicle.hpp"
#include <memory>

class VehicleStore
{
public:
	virtual std::unique_ptr<Vehicle> orderVehicle(std::string type) = 0;
};

#endif