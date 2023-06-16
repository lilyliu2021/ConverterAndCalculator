#pragma once
#include <string>

class Calculator {
protected:
	virtual std::string interpretResult(double result) = 0;
//4. protected virtual std::string interpretResult(double result) = 0 : This function should take a result
//value and return an interpretation.The interpretation should be in a form that is easy for users
//to understand and relevant to the computation that has been performed.
public:
	//Calculator(const std::string& calculatorName, const double inputValue, const double result);
	virtual double calculate(double val1, double val2) = 0;
		//1. virtual double calculate(double val1, double val2) = 0: This function should take two numerical
	//inputs and compute a calculation based on them.The exact nature of this calculation will
	//depend on the derived classes.
	void printResult(double result);
//2. void printResult(double result) : This function should take the computed result and print it in a
//user - friendly manner.
	virtual void description() const;
		//3. virtual void description() const : This function should print a description detailing the specific
//functionality of each calculator class.

		
};





