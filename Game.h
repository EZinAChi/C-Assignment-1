#pragma once
#include "Session.h"

//The Game object drives the game. Its behaviour changes depending on the state of
//the game.The Game object :
// > Is responsible for initialisingand starting a new session(i.e.the current session).
// > Is responsible for presenting the previous games statistics.
// > Is responsible for presenting the game help information.
// > Knows about the current session.
// > Knows about all past sessions.
//There should only be a single instance of Game at any one time.

class Game{
private:
	int played = 1;
	std::string input = "";
	bool streak;
public:
	Game(int p) {
		this->played = p;
	}
	void Play() {
		std::cout << "guess: ";
		std::cin >> input;
		Session s(played, input);
		int* resPtr = s.GetResult; 
		while (true){
			std::cout << "guess: ";
			std::cin >> input;
			Session s(played, input);

			if (resPtr[s.getGuess] == 1) {
				if (streak){
					maxstreak_count += 1;
				}
				curstreak_count += 1;
				streak = true;
				break;
			}
			streak = false;
		}
		
	}

	void Help() {
		std::cout <<
			"\n Guess the WERDLE in six tries. \n \n Each guess must be a five - letter word. Hit the enter button to submit. \n \n Examples \n [A] P P L E \n The letter A is in the correct position. \n D |E| A L T \n The letter E is in the word but in the wrong position. \n \n \n";
		std::cout << "Welcome to Werdle.\n Select an option : \n 1. Play a game. \n 2. View statistic. \n 3. View help. \n";
	}

	void Statistic() {
		int percent;
		if (played == 0) {
			percent = 100;
		}
		else {
			percent = win_count / played * 100;
		}

		std::cout << "Played: " << play_count << " Win % : " << percent << " Current streak : " << curstreak_count << " Max streak : " << maxstreak_count << "\n \n GUESS DISTRIBUTION \n";
		for (int i = 0; i < 6; i++) {
			std::cout << i + 1 << ": " << 0 << "\n";
		}
	}
};

