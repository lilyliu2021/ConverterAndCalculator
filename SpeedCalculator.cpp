#include <iostream>
#include "SpeedCalculator.h"

std::string SpeedCalculator::interpretResult(double result) {
	if (result < 8.96) {
		return "You are walking";
	}
	else if (result>=8.96&&result < 19) {
		return "You are running";
	}
	else if (result>=19 && result < 26) {
		return "You are biking";
	}
	else {
		return "You are driving";
	}
	/*2. protected std::string interpretResult(double result) override : This function should provide an
	interpretation of the speed result.It could contextualize the result with typical speeds for
	walking, running, biking, or driving, for example.*/
}

double SpeedCalculator::calculate(double distance, double time) {
	return distance / time;
	/*1. double calculate(double distance, double time) override : This function should calculate speed by
		dividing the given distance by time.*/
	}
	
void SpeedCalculator::description() const {
	std::cout << "----------Speed Calculator Description----------" << std::endl;
	std::cout <<"This calculator calculates the speed based on the distance and time using the formula : average speed = total distance / total time.Typical units for speed include kilometers per hour(kph) and miles per hour(mph).Maximum walking speed is about 8.96 km / h, Average running speed is about 13km / h, Average biking speed is about 19km / h - 26km / h" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	/*3. void description() const override : This function should print a description of the SpeedCalculator
	class's specific functionality.*/
	}
	