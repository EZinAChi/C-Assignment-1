#pragma once
#include <string>

//contains an array of words that you must use in your game.The system must
//select words in - order from the dictionary so that session 1 selects word 1 from the
//dictionary, session 2 selects word 2, etc.

class Dictionary {
public:
	static const int WORD_COUNT = 39;
	static const std::string words[];
};

