#include "FlatWhite.hpp"
#include "Cappuccino.hpp"
#include <stdlib.h>

using namespace std;

int main()
{
	cout<<"Making flat white..."<<endl;
	FlatWhite flatWhite = FlatWhite();
	flatWhite.build();
	cout<<"---Done!---"<<endl;

	cout<<"Making Cappuccino..."<<endl;
	Cappuccino cappuccino = Cappuccino();
	cappuccino.build();
	cout<<"---Done!---"<<endl;

	system("pause");

	return 0;
}