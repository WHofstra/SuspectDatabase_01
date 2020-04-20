#pragma once
#include <string>

class Offence
{
    public:
		Offence(std::string aName, std::string anInfo);
    	~Offence();

		std::string GetName();
		std::string GetInfo();

		void SetMaxSentence(std::string aMax);
		std::string GetMaxSentence();

	private:
		std::string name;
		std::string info;
		std::string maxSentence;
};
