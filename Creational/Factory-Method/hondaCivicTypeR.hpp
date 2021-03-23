#ifndef HONDACIVICTYPER_HPP
#define HONDACIVICTYPER_HPP

#include "vehicle.hpp"
#include <iostream>

class HondaCivicTypeR : public Vehicle
{
public:
	HondaCivicTypeR()
	{
		name = "honda civic type r";
		engine = "DOHC VTEC Turbo in line 4-cylinder engine";
		transmission = "6-speed manual transmission with rev matching function";
		power = "228kW @6,500rpm";
		torque = "400NM @2,500-4,500rpm";

		this->make();
	}

	void make() const
	{
		std::cout << "made in Swindon honda factory(UK)" << std::endl;
	}
};

#endif