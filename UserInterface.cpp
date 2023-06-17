#include<iostream>
#include"UserInterface.h"
 double  UserInterface::getUserInput(const std::string& prompt) {
	double value;
	std::cout << prompt;
	std::cin >> value;
	return value;
}
 void  UserInterface::printUserOutput(const std::string& prompt, double result) {
	std::cout << prompt;
	std::cout << result;
}
 int UserInterface::menuChoice(const std::string& menuLable, const std::string& menuOption1, const std::string& menuOption2) {
	 bool repeat = true;
	 int choice;
	 while (repeat) {
		 std::cout << menuLable << std::endl;
		 std::cout << menuOption1 << std::endl;
		 std::cout << menuOption2 << std::endl;
		 std::cin >> choice;
		 if (choice == 1 || choice == 2) {
			 break;
		 }else
		 {
			 std::cout << "Invalid choice.Please try again.\n";
		 }		
	 }
	 return choice;
 }