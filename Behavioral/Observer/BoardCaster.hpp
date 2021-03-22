#ifndef BOARDCASTER_HPP
#define BOARDCASTER_HPP

#include <unordered_set>
#include "Subject.hpp"

class BoardCaster : public Subject
{
private:
	int homeScore;
	int awayScore;
	bool isOver;
	std::unordered_set<Observer*> observers;
public:
	BoardCaster() : homeScore(0), awayScore(0), isOver(false) {}
	
	virtual void registerObserver(Observer* o)
	{
		observers.insert(o);
	}
	
	virtual void removeObserver(Observer* o)
	{
		observers.erase(o);
	}
	
	virtual void notifyObserver()
	{
		for(auto o : observers)
		{
			o->update(homeScore, awayScore, isOver);
		}
	}
	
	void gameDataChanged()
	{
		notifyObserver();
	}
	
	void homeGoal()
	{
		homeScore += 1;
		gameDataChanged();
	}

	void awayGoal()
	{
		awayScore += 1;
		gameDataChanged();
	}

	void gameOver()
	{
		isOver = true;
		gameDataChanged();
	}
};

#endif