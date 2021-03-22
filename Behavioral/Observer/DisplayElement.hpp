#ifndef DISPLAY_HPP
#define DISPLAY_HPP

class DisplayElement
{
public:
	virtual ~DisplayElement() = default;
	virtual void display() = 0;
};

#endif