#ifndef CURRENTCONDITIONSDISPLAY_HPP
#define CURRENTCONDITIONSDISPLAY_HPP

#include "DisplayElement.hpp"
#include "Observer.hpp"

#include <iostream>
#include <memory>

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
private:
	int homeScore;
	int awayScore;
	bool isOver;
	std::shared_ptr<Subject> boardCaster;
public:
	CurrentConditionsDisplay(std::shared_ptr<Subject> b) : homeScore(0), awayScore(0), isOver(false), boardCaster(std::move(b)) {}

	void registerObserver()
	{
		boardCaster->registerObserver(this);
	}

	~CurrentConditionsDisplay()
	{
		boardCaster->removeObserver(this);
	}

	virtual void update(int h, int a, bool i)
	{
		homeScore = h;
		awayScore = a;
		isOver = i;
		display();
	}
	
	virtual void display()
	{
		std::cout<<"Current condidions: \n"<<"homeScore : awayScore\n"<<homeScore<<" : "<<awayScore<<std::endl;
		if(isOver)
			std::cout<<"Game is over!"<<std::endl;
	}
};

#endif