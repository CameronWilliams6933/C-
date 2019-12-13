#include <iostream>
#include <iomanip>
#include <ctime>
#include "Time.h"
using namespace std;

int main()
{
	int count = 0; 
	Time lunch;
	Time breakFast(8, 30, 0);


	lunch.setHour(11);

	if (breakFast.getHour() > 7)
	{
		cout << "Late Breakfast Today " << endl;
	}

	lunch.setHour(15);
	lunch.setMinute(30);

	cout << "We are having breakfast at ";
	// print out breakfast 
	breakFast.printMilitary();
	cout << endl;
	// Print out Lunch
	lunch.printMilitary();
	cout << endl;
	breakFast.printStandard();
	cout << endl;
	lunch.printStandard();
	cout << endl;



	system("pause");
}


=======================================================================================================================================







class Time
{
private:
	int hour;
	int minute;
	int second;

public:
	//Function prototypes
	Time();
	Time(int h, int m, int s);
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	int getHour();
	int getMinute();
	void printMilitary();
	void printStandard();
	void setTime(int h, int m, int s);

};









=======================================================================================================================================









#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;


//Constructor Functions
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int h, int m, int s)
{
	if (h >= 0 && h <= 23)
	{
		hour = h;
	}
	
	if (m >= 0 && m <= 59)
	{
		minute = m;
	}
	
	if (s >= 0 && s <= 59)
	{
		second = s;
	}


	
}

void Time::setHour(int h)
{
	if (h >= 0 && h <= 23)
	{
		hour = h;
	}
}

void Time::setMinute(int m)
{
	if (m >= 0 && m <= 59)
	{
		minute = 0;
	}
}

void Time::setSecond(int s)
{
	if (s >= 0 && s <= 59)
	{
		second = 0;
	}
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

void Time::printMilitary()
{
	cout << setfill('0') << setw(2) << hour
		<< setfill('0') << setw(2) << minute;
		
}

void Time::printStandard()
{
	// example: 12:34:30 am
	cout << (hour > 12 ? hour - 12 : hour) << ":"
		<< setfill('0') << setw(2) << minute << ":"
		<< setfill('0') << setw(2) << second
		<< (hour >= 12 ? " pm" : " am");
}
