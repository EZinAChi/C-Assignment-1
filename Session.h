#pragma once
#include "Dictionary.h"
#include "Guess.h"

//Represents a playthrough of the game(e.g.up to six guesses of an unknown
//	word).When the first session is created, it should be assigned the first word from the
//	dictionary.Subsequent sessions should be assigned subsequent words in - order.This is for
//	testing purposes.A session object :
// > Knows the guesses that have been made for that session.
// > Knows if any guess in the session was correct.
// > Knows the final score of the session, where the score is calculated as the number of
//guesses in the session.

class Session{
private:
	std::string word = "";
	std::string input = "";
	static int guesses[6], guess;
public:
	Session(int p, std::string w) {
		Dictionary d;
		this->word = d.words[p];
		this->input = w;

		for (int i = 0; i < 6; i++) {
			guesses[i] = 0;
		}
		guess = 0;
	}

	int* GetResult() {
		Guess g;
		int* resPtr = g.Compare(word, input);
		for (int i = 0; i < 6; i++) {
			guesses[guess] = 1;
			if (resPtr[i] != 1) {
				guesses[guess] = 0;
			}
		}
		guess += 1;
		return guesses;
	}

	int getGuess() { return guess; }
};

