#pragma once
#include <string>

class UserInterface {
public:
	static double getUserInput(const std::string& prompt);
	static void printUserOutput(const std::string& prompt,double result);
	static int menuChoice(const std::string& menuLable,const std::string& menuOption1, const std::string& menuOption2);
};