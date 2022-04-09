#pragma once
#include "Session.h"
#include "Assignment1.cpp"

//Represents a single guess made by the player.A guess object :
// > Knows the guess that was made.
// > Knows if the guess was correct.
// > Is responsible for presenting the guess results back to the player.

class Guess {
public:
	int* Compare(std::string word, std::string input) {
		int arr[5];
		for (int i = 0; i < 5; i++) {
			for (int x = 0; x < 5; x++) {
				if (word[x] == input[i]) {
					arr[i] = 2;
				}
			}
			if (word[i] == input[i]) {
				arr[i] = 1;
			}
		}

		return arr;
	}
};

