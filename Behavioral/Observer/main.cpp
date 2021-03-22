#include <stdlib.h>
#include "BoardCaster.hpp"
#include "CurrentConditionsDisplay.hpp"

void gameScript()
{
	auto b = std::make_shared<BoardCaster>();
	CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(b);
	currentDisplay->registerObserver();
	b->homeGoal();
	b->awayGoal();
	b->homeGoal();
	b->homeGoal();
	b->gameOver();
	delete currentDisplay;
}

int main()
{
	gameScript();

	system("pause");
	return 0;
}