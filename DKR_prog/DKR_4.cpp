#include <iostream>
#include <conio.h>
using namespace std;



int main()
{
	

	int day = 0, month = 0, year = 0;

	cout << "Enter a year:" << endl;
	cin >> year;
	while (year <= 0)
	{
		cout << "Error, enter a number that bigger than 0!" << endl;
		cin >> year;
	}

	cout << "Enter a month:" << endl;
	cin >> month;
	while (month <= 0 || month > 12)
	{
		cout << "Error, enter a number of month from 1 to 12:" << endl;
		cin >> month;
	}



	cout << "Enter a day:" << endl;
	cin >> day;
	while (month <= 7 && month % 2 == 0 && (day > 30 || day <= 0))
	{
		if (month == 2 && day <= 28)
		{
			break;
		}
		else if (year % 4 == 0 && day == 29)
		{
			break;
		}
		cout << "Error, this month has only 30 days in it. Please, enter correct date." << endl;
		cin >> day;
	}
	while (month <= 7 && month % 2 != 0 && (day > 31 || day <= 0))
	{
		cout << "Error, this month has only 31 days in it. Please, enter correct date." << endl;
		cin >> day;
	}
	while (month > 7 && month % 2 != 0 && (day > 30 || day <= 0))
	{
		cout << "Error, this month has only 30 days in it. Please, enter correct date." << endl;
		cin >> day;
	}
	while (month > 7 && month % 2 == 0 && (day > 31 || day <= 0))
	{
		cout << "Error, this month has only 31 days in it. Please, enter correct date." << endl;
		cin >> day;
	}


		int counter = 0;
		int daysLeft = 365;

		for (int i = 1; i < month; i += 2)
		{
			counter += 31;
		}
		for (int i = 2; i < month; i += 2)
		{
			if (year % 4 == 0 && i == 2)
			{
				counter += 29;
			}
			else if (i == 2 && year % 4 == 1)
			{
				counter += 28;
			}
			else { counter += 30; }

		}
		for (int i = 1; i < day; i++)
		{
			counter++;
		}
		if (year % 4 == 0)
		{
			daysLeft = daysLeft - counter;
		}
		else
			daysLeft = daysLeft - counter - 1;

		cout << "It's " << counter << " day since start of the year" << endl;
		cout << "Days left= " << daysLeft << endl;

		_getch();
		return 0;

	}
