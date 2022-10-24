//Farmer.cpp
#include "Farmer.h"
//Farmers Values


//Farmers Actions

	void Farm::Run()
	{
		

		SetName();

		//Start loop
		//
		bool running = true;
		while(running)
		{ 
			Console::Printf("Hej");
			running = false;

		}
		//End Loop
		//
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


	void Farm::SellAnimal()
	{
		//Destroy animal object
		//
	}

	void Farm::FeedAnimal()
	{
		//Increase animal object food value
		//
	}

	void Farm::BuyAnimal()
	{
		//Create new animal object
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

	void Farm::SetMoney(float thismoney)
	{
		money = thismoney;
	}




