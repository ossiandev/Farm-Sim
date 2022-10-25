//Farmer.h
#pragma once
#include <string>
#include "Console.h"
#include "Animal.h"
#include <vector>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       


class Farm
{
	//Farmer Values
private:
	float money;
	
public:
	std::string name;
	int animalAmount;
	int animalStorage;
	std::vector<Animal> animalsOwned;
	float food;
	Animal animals[3];
	//Farmer Interactions
	void Run();
	void SellAnimal();
	void FeedAnimal();
	void BuyAnimal();
	void BuyStorage();
	void SetName();
	//Getters and Setters
	float GetMoney();
	void SetMoney(float money);

};

