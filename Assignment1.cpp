// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dictionary.h"

const std::string Dictionary::words[] = {
	"speed",
	"crowd",
	"teeth",
	"which",
	"agree",
	"basis",
	"ratio",
	"lease",
	"avoid",
	"state",
	"anger",
	"needs",
	"input",
	"motor",
	"blame",
	"short",
	"album",
	"smoke",
	"rural",
	"equal",
	"mayor",
	"their",
	"tight",
	"block",
	"three",
	"field",
	"while",
	"trade",
	"chart",
	"maria",
	"offer",
	"flash",
	"front",
	"thick",
	"birth",
	"crown",
	"faith",
	"fight",
	"boost",
	"right"
};

void menu(int i) {
	while (i != 1 && i != 2 && i != 3) { std::cout << "\n Please type in the number (1-3).\n Select an option : \n 1. Play a game. \n 2. View statistic. \n 3. View help. \n"; std::cin >> i; }

	if (i == 1) {}
	else if (i == 2) {}
	else if (i == 3) {
		std::cout <<
			"\n Guess the WERDLE in six tries. \n \n Each guess must be a five - letter word. Hit the enter button to submit. \n \n Examples \n [A] P P L E \n The letter A is in the correct position. \n D |E| A L T \n The letter E is in the word but in the wrong position. \n \n \n";		std::cout << "Welcome to Werdle.\n Select an option : \n 1. Play a game. \n 2. View statistic. \n 3. View help. \n";
		std::cin >> i;		menu(i);	}
}

int main()
{	
	int x;
    std::cout << "Welcome to Werdle.\n Select an option : \n 1. Play a game. \n 2. View statistic. \n 3. View help. \n";
	std::cin >> x;
	menu(x);	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
