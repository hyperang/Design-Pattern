#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <string>
#include <iostream>

class Vehicle
{
public:
	std::string name;
	std::string engine;
	std::string transmission;
	std::string power;
	std::string torque;

	const std::string& getName() const;

	virtual void make() const = 0;
	virtual ~Vehicle() = default;
};

const std::string& Vehicle::getName() const
{
	return this->name;
}

#endif