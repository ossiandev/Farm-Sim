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
	//Farmer Interactions
	Animal AnimalCreation(Animal templateAnimal, std::string animalType, int age);
	void Run();
	void SellAnimal(Animal animal);
	void FeedAnimal(Animal animal, int foodGiven);
	void BuyAnimal();
	void BuyStorage();
	void SetName();
	//Getters and Setters
	float GetMoney();
	void SetMoney(float money);

};

