#ifndef FLATWHITE_HPP
#define FLATWHITE_HPP

#include "Coffee.hpp"

#include <iostream>

class FlatWhite : public Coffee
{
public:
	~FlatWhite(){}
	
protected:
	virtual void chooseBeans()
	{
		std::cout<<"Arabica"<<std::endl;
	}

	virtual void addCondiments()
	{
		std::cout<<"Milk 100ml / Foam 35ml"<<std::endl;
	}
};

#endif