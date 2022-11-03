#include "Console.h"
//Prints and doesn't end line
template<typename T>
void Console::Print(T t)
{
	std::cout << t;
}
//Prints and ends line
template<typename T>
void Console::Printf(T t)
{
	std::cout << t << "\n";
}

//Scrolls down past latest printed line
void Console::Clear()
{
	std::cout << "\x1B[2J\x1B[H";
}

//Generates a value between minValue and maxValue
int Console::randNext(int minValue, int maxValue)
{
	//generates a seed for random with time
	srand((unsigned)time(0));
	int result = minValue + (rand() % maxValue);
	return result;
}