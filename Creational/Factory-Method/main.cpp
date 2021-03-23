#include "hondaStore.hpp"
#include <memory>
#include <stdlib.h>

int main()
{
	auto hondaStore = std::make_unique<HondaStore>();

	auto hondaCivicTypeR = hondaStore->orderVehicle("honda civic type r");

	system("pause");
	return 0;
}
