// review-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

// Calculates an approximation for pi according to users input
void notes_3()
{
	// declare and initialize variables
	char play_again = 'y';		// users input for the program to again
	int n = 0;					// the degree of n in the formula
	double pi_sum = 0.0;		// the value of pi, the result
	bool is_playing = true;		// determines if the program runs again

    do
	{
		// get user input
		cout << "Please enter a number to calculate and approximation to pi." << endl;
		cin >> n;
		
		// calculate the value of pi by adding the series
		for (int i = 0; i <= n; i++)
		{
			pi_sum += ((pow(-1, i)) / (2 * i + 1));
		}

		// output pi approximation value
		cout << 4 * pi_sum << endl;
		
		// user input to play again
		cout << "Do you want to enter a different \"n\"? Type Y/N.\n";
		cin >> play_again;

		if (play_again == 'N' || play_again == 'n')
		{
			is_playing = false;
		}
		
		// reset number for next rounds
		pi_sum = 0.0;
	} while (is_playing);
}


// Computes the length of the hypotenuse of a right-angled triangle
void notes_4()
{
	double base = 0;			// base length of triangle
	double side = 0;			// perpendicular side length of triangle
	double hypotenuse = 0;		// hypotenuse length of triangle

	// Get user input for base and side length values
	cout << "Please enter the base length.\n";
	cin >> base;

	cout << "Please enter the perpendicular side length.\n";
	cin >> side;

	// calculate the hypotenuse length value
	hypotenuse = sqrt( pow(base, 2) + pow(side, 2) );

	cout << "The hypotenuse length is " << hypotenuse << ".";
}

int main()
{
    // notes_3();
	notes_4();
}