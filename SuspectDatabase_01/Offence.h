#pragma once

class Offence
{
    public:
		Offence();
    	~Offence();

		std::string GetInfo();
		std::string GetMaxSentence();

		std::string name;
		std::string info;
};
