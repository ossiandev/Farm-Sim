//Farmer.cpp
#include "Farmer.h"
//Farmers Values


//Farmers Actions



void Farm::Run()
{
	//Initalization start
	int daysTotal = 0;
	//Initalization end
	SetName();
	Console::Clear();
	Console::Printf("How many days would you like to play for?\n");
	Console::Print("Days: ");
	std::cin >> daysTotal;
	for (int days = 0; days < daysTotal; days++)
	{
		Console::Printf("Day " + days);
		Console::Printf("You currently have: ");
		if(animalsOwned.size() < 2)
		{
			Console::Printf(animalsOwned.size() + " Animal"); 
		}
		else
		{
			Console::Printf(animalsOwned.size() + " Animals");
		}
	}
	//Cycles through days
	Console::Printf("Hej");
}
	
	//Set farmer name.
	void Farm::SetName()
	{
		bool running = true; 
		while (running)
		{
			Console::Clear();
			Console::Printf("Please write your farmers name.\n");
			Console::Print("Name: ");
			std::string name = "";
			std::cin.ignore();
			std::getline(std::cin, name);
			//Programmers note, Really weak structure on the code but it does the job so eh.
			bool inOption = true;
			while (inOption)
			{
				Console::Clear();
				Console::Printf("Your farmers name is " + name);
				Console::Printf("1. Accept");
				Console::Printf("2. Decline");
				char input = '.';
				std::cin >> input; 
				if (input == '1')
				{
					running = false;
					inOption = false;
				}
				else if (input == '2') 
				{
					inOption = false;
				}
			}
		}
	}
	

	void Farm::SellAnimal(Animal animal)
	{
		//Animal Destructor	

	}

	void Farm::FeedAnimal(Animal animal, int foodGiven)
	{
		//Increase animal object food value
		//
		

	}
	Animal Farm::AnimalCreation(Animal templateAnimal, std::string animalType, int age)
	{
		
		if (animalType == "Chicken")
		{
			templateAnimal.size = 1;
		}
		else 
		{
			templateAnimal.size = 2;
		}

		templateAnimal.age = age;
		templateAnimal.animalType = animalType;
		templateAnimal.hunger = 10;//Console::RandNext(6,10);
		return templateAnimal;
	}
	void Farm::BuyAnimal()
	{
		//Create new animal objects that are randomly generated every 3 days
		//


	}

	void Farm::BuyStorage()
	{
		//Add more spaces for animals
		//
	}
	//Getters and setters
	//

	float Farm::GetMoney()
	{
		return money;
	}

	void Farm::SetMoney(float newMoney)
	{
		money = newMoney;
	}




