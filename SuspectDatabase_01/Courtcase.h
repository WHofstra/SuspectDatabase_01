#pragma once
#include <string>
#include <time.h>

class Courtcase
{
    public:
		Courtcase();
	    ~Courtcase();

		std::string GetSentence();


    private:
		std::string typeOffence;
		std::string sentence;
		struct tm startingDate;
};

