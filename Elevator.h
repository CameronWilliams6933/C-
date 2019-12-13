//Inclass.ccp file

#include <iostream>
#include <iomanip>
#include "Elevator.h"
using namespace std;

int main()
{
	int number = 0; 
	Elevator currentFloor;
	int i = 0;

	currentFloor.setFloor();

	for (i = 0; i < 6; i++)
	{


		cout << "If you would like to go Up Press 1; If you would like to go down Press 0: " << endl;
		cin >> number;

		if (number == 1)
		{
			cout << "Your current Floor is";
			currentFloor.goUp();
			cout << endl;
		}

		if (number == 0)
		{
			currentFloor.goDown();

		}

		if (number < 1)
		{
			cout << "Error: cannot go below floor 1" << endl;
		}


		currentFloor.displayFloor();


	}


	

	
	
========================================================================================================================================

	
	



	

	
}

//Elevator.h file



class Elevator
{
private: 
	int currentFloor;

public:
	void goUp();
	void goDown();
	void displayFloor();
	void setFloor();

	

};












========================================================================================================================================



















//Elevator.cpp file

#include "Elevator.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Constructor Functions

void Elevator::goUp()
{
	if(currentFloor < 3)
	{
		 currentFloor++;
	}
	else
	{
		cout << " :Cannot go above three floors" << endl;
	}
}

void Elevator::goDown()
{
	if(currentFloor > 1)
	{
		currentFloor--; 
	}
}

void Elevator::displayFloor()
{
	cout << currentFloor << endl; 
}

void Elevator::setFloor()
{
	currentFloor = 1;
}
