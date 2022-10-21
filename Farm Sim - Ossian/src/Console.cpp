#include "Console.h"

template<typename T>
void Console::Print(T t)
{
	std::cout << t;
}

template<typename T>
void Console::Printf(T t)
{
	std::cout << t << "\n";
}

void Console::Clear()
{
	std::cout << "\x1B[2J\x1B[H";
}
