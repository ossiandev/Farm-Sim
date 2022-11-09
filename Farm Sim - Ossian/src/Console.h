#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>


namespace Console
{
	template <typename T>
	void Print(T t);
	void Clear();
	template <typename T>
	void Printf(T t);
	int RandNext(int minValue, int maxValue);

}
