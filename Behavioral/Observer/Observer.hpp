#ifndef OBSERVER_HPP
#define OBSERVER_HPP

class Observer
{
public:
	virtual ~Observer() = default;
	// 重写需要函数名与参数类型个数相同
	virtual void update(int homeScore, int awayScore, bool isOver) = 0;
};

#endif