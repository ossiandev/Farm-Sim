//Main.cpp
#include "Farmer.h"
#include "Animal.h"
//#include "Timer.h"
int main()
{
	
	
	//Timer timer;
	//timer.Reset();
	Farm sys;
	Animal animal;
	sys.AnimalCreation(animal,"Pig", 10);
	//std::cout << timer.Elapsed() * 1000.0f << "\n";
	return 1;
}

