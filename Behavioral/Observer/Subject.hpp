#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"

class Subject
{
public:
	virtual ~Subject() = default;
	virtual void registerObserver(Observer*) = 0;
	virtual void removeObserver(Observer*) = 0;
	virtual void notifyObserver() = 0;
};

#endif