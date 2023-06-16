#pragma once
#include <string>
#include "Calculator.h"
class BMICalculator :public Calculator {
protected:
	std::string interpretResult(double result) override;
	/*2. protected std::string interpretResult(double result) override : This function should provide a
		health - related interpretation of the BMI result.It could be categorizing the result into
		underweight, normal weight, overweight, and obese based on standard BMI categories.*/
public:
	double calculate(double weight, double height) override;
	/*1. double calculate(double weight, double height) override : This function should calculate the
		Body Mass Index(BMI) based on the provided weight and height.*/

	void description() const override;
	/*3. void description() const override : This function should print a description of the BMICalculator
		class & #39; s specific functionality.*/
	
};