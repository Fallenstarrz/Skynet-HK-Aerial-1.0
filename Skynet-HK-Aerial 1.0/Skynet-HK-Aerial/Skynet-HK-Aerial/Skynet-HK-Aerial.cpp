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
	const int secretNumber = rand()%100 + 1; // number that the computer is trying to guess
	int guess; // This variable stores the guess
	int tries = 0; // This variable holds the number of attempts required to guess the secretNumber correctly

	cout << "Skynet HK-Aerial" << endl << endl;

	do
	{
		cout << "Enter A Guess" << endl;
		cin >> guess;
		if (guess > secretNumber)
		{
			cout << "Too high!" << endl;
			tries++;
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!" << endl;
			tries++;
		}
		else
		{
			tries++;
			cout << "You got it correct, and it only took you "<<  tries << "to get it correctly!" << endl;
			
		}

	} while (guess != secretNumber);

	system("pause");
    return 0;
}

