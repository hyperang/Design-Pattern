#ifndef BMWM3_HPP
#define BMWM3_HPP

#include "vehicle.hpp"
#include <iostream>

class BmwM3 : public vehicle
{
public:
	BmwM3()
	{
		name = "bmw m3";
		engine = "M TwinPower Turbo in line 6-cylinder engine";
		transmission = "6-speed manual transmission";
		power = "331kW @7,000rpm";
		torque = "550NM @2,350-5,500rpm";

		this.make();
	}

	void make() const
	{
		cout << "made in Munich bmw factory(GER)" << endl;
	}
};

#endif