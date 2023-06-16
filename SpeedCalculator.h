#pragma once
#include <string>
#include "Calculator.h"

class SpeedCalculator :public Calculator {
protected:
	std::string interpretResult(double result) override;
	/*2. protected std::string interpretResult(double result) override : This function should provide an
		interpretation of the speed result.It could contextualize the result with typical speeds for
		walking, running, biking, or driving, for example.*/
public:
	double calculate(double distance, double time) override;
	/*1. double calculate(double distance, double time) override : This function should calculate speed by
		dividing the given distance by time.*/
	void description() const override;
	/*3. void description() const override : This function should print a description of the SpeedCalculator
	class's specific functionality.*/
	
};