#include <iostream>
#include "Calculator.h"


	void Calculator::printResult(double result) {
		std::cout << "Result: " << result << std::endl;
		//2. void printResult(double result) : This function should take the computed result and print it in a
	//user - friendly manner.
		std::cout << "Interpretation: " << interpretResult(result) << std::endl;
	}
	
	void Calculator::description() const {
		std::cout << "Base Calculator" << std::endl;
		//3. virtual void description() const : This function should print a description detailing the specific
//functionality of each calculator class.
	 }
	

