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
	int highNum = 64; // This is a variable to limit how high the grid goes
	int lowNum = 1; // This is a variable to limit how low the grid goes
	const int targetPos = rand() % highNum + lowNum; // This is the number that the AI is trying to find
	int guess; // This is the number the AI is scanning
	int tries = 0; // This variable holds the number of attempts required to guess the secretNumber correctly

	cout << "Skynet HK-Aerial" << endl << endl;

	do // Do loop! This runs at least once!
	{
		guess = ((highNum - lowNum) / 2) + lowNum; // This will get called every time the loop restarts. It will make the computer choose a new guess.
		cout << "Initiating search at position " << guess << "." << endl;

		if (guess > targetPos)
		{
			cout << "Target not found. \nInitiating search at lower position." << endl << endl;
			highNum = guess; // If number is too high, then we make highNum the guess, so when we restart the loop, the computer cannot guess any higher than our previous number
			tries++; // add 1 to tries, so we know how many attempts it took the computer
		}
		else if (guess < targetPos)
		{
			cout << "Target not found. \nInitiating search at higher position." << endl << endl;
			lowNum = guess; // If number is too low, then we make lowNum the guess, so when we restart the loop, the computer cannot guess any lower than our previous guess
			tries++; // add 1 to tries, so we know how many attempts it took the computer
		}
		else
		{
			tries++; // add 1 to tries, so we know how many attempts it took the computer
			cout << "Target sighted at " << targetPos << endl; // print the block that we found our target at.
			cout << "Scanned "<<  tries << " blocks to find the target." << endl << endl; // Print the number of tries it took us to get the correct number
			
		}

	} while (guess != targetPos); // This is the loop part of the Do. As long as the AI hasn't found the target it will keep searching.

	system("pause"); // Pause the console
    return 0;
}

