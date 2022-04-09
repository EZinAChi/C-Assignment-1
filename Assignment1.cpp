// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dictionary.h"
#include "Game.h"

static int maxstreak_count = 0, curstreak_count = 0, win_count = 0, play_count = 0;

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

	if (i == 1) {
		Dictionary d;
		play_count += 1;
		std::cout << play_count;
		std::cout << d.words[4];
	}

	else if (i == 2) {
		Game g(play_count);
		g.Statistic;
		menu(i);
	}

	else if (i == 3) {
		Game g(play_count);
		g.Help;
		std::cin >> i;
		menu(i);
	}
}

int main()
{
	int message;
	Game game();
	std::cout << "Welcome to Werdle.\n Select an option : \n 1. Play a game. \n 2. View statistic. \n 3. View help. \n";
	std::cin >> message;
	menu(message);
	


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
