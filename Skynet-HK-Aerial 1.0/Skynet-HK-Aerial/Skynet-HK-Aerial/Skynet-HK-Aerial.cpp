// Skynet-HK-Aerial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); // Seed random number generator
	int highNum = 64;
	int lowNum = 1;
	const int secretNumber = rand()lowNum + highNum; // number that the computer is trying to guess
	int guess; // This variable stores the guess
	int tries = 0; // This variable holds the number of attempts required to guess the secretNumber correctly
	bool targetFound = false;

	cout << "Skynet HK-Aerial" << endl << endl;

	do
	{
		cout << "Enter a number between 1 and 64" << endl;
		cin >> guess; // Make This random from computer
		if (guess > secretNumber)
		{
			cout << "Too high!" << endl; // Change guess to exclude numbers above our guess
			tries++;
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!" << endl; // Change guess to exclude numbers below our guess
			tries++;
		}
		else
		{
			tries++;
			cout << "You got it correct, and it only took you "<<  tries << "to get it correctly!" << endl; // Some flavor text here for found the enemy.
			
		}

	} while (guess != secretNumber);

	system("pause");
    return 0;
}

