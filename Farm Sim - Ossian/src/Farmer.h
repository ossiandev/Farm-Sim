//Farmer.h
#pragma once
#include <string>
#include "Console.h"
#include "Animal.h"
#include <vector>

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
	//Farmer Interactions
	void Run();
	void SellAnimal();
	void FeedAnimal();
	void BuyAnimal();
	void BuyStorage();

	//Getters and Setters
	float GetMoney();
	void SetMoney(float money);

};

