#ifndef CAPPUCCINO_HPP
#define CAPPUCCINO_HPP

#include "Coffee.hpp"
#include <iostream>

class Cappuccino : public Coffee
{
public:
	~Cappuccino(){}

protected:
	virtual void chooseBeans()
	{
		std::cout<<"Robusta"<<std::endl;
	}

	virtual void addCondiments()
	{
		std::cout<<"Milk 110ml / Foam 50ml"<<std::endl;
	}
};

#endif