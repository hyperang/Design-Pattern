#ifndef COFFEE_HPP
#define COFFEE_HPP

#include <iostream>

class Coffee
{
public:
	virtual ~Coffee(){}

	void build()
	{
		chooseBeans();
		boilWater();
		brew();
		addCondiments();
		pourInCup();
	}

private:
	void boilWater()
	{
		std::cout<<"3...2...1...Water is boiled!"<<std::endl;
	}

	void brew()
	{
		std::cout<<"3...2...1...Get espresso!"<<std::endl;
	}

	void pourInCup()
	{
		std::cout<<"3...2...1...Yeah!"<<std::endl;
	}

	virtual void chooseBeans() = 0;
	virtual void addCondiments() = 0;	
};

#endif