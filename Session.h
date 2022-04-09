#pragma once
#include "Dictionary.h"

//Represents a playthrough of the game(e.g.up to six guesses of an unknown
//	word).When the first session is created, it should be assigned the first word from the
//	dictionary.Subsequent sessions should be assigned subsequent words in - order.This is for
//	testing purposes.A session object :
// > Knows the guesses that have been made for that session.
// > Knows if any guess in the session was correct.
// > Knows the final score of the session, where the score is calculated as the number of
//guesses in the session.

class Session{
public:
	Session(int p) {
		Dictionary d;
		std::string word = d.words[p];
	}
};

