#include <iostream>
#include "BMICalculator.h"

std::string BMICalculator::interpretResult(double result) {
	if (result < 18.5) {
		return "Underweight";
	}
	else if (result>=18.5&&result < 25) {
		return "Healthy weight";
	}
	else if (result>=25&&result <=29.9) {
		return "Overweight";
	}
	else {
		return "Obese";
	}
	/*2. protected std::string interpretResult(double result) override : This function should provide a
health - related interpretation of the BMI result.It could be categorizing the result into
underweight, normal weight, overweight, and obese based on standard BMI categories.*/
}

double BMICalculator::calculate(double weight, double height) {
	return weight / (height * height);  //kg/m2
	/*1. double calculate(double weight, double height) override : This function should calculate the
		Body Mass Index(BMI) based on the provided weight and height.*/
	}
	

void BMICalculator::description() const {
	std::cout << "----------BMI Calculator Description----------" << std::endl;
	std::cout << "Body Mass Index is a simple calculation using a person's height and weight. The formula is BMI = kg/m2 where kg is a person's weight in kilograms and m2 is their height in metres squared. A BMI of 25.0 or more is overweight, while the healthy range is 18.5 to 24.9. BMI applies to most adults 18-65 years." << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	/*3. void description() const override : This function should print a description of the BMICalculator
		class's specific functionality.*/
	}
	
