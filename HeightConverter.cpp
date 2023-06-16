#include <iostream>
#include "HeightConverter.h"

//create three classes, WeightConverter, DistanceConverter, and HeightConverter, that inherit from
//the Converter base class.These classes will be responsible for weight, distance, and height conversions
//respectively :

double HeightConverter::toMetric(double value) {
	/*1. double toMetric(double value) override : This function should take the provided value in imperial
		units and convert it to its metric equivalent.*/
	return value * 0.3048; // Conversion factor from feet to centimeters
}

double HeightConverter::toImperial(double value) {
	/*2. double toImperial(double value) override : Similarly, this function should take the provided value
		in metric units and convert it to its imperial equivalent*/
	return value * 3.28084; // Conversion factor from centimeters to feet
}

void HeightConverter::description() const {
	/*3. void description() const override : This function should print a description detailing the specific
		functionality of each converter class.*/
	std::cout << "----------Height Converter Description----------" << std::endl;
	std::cout << "Height converter: Converts between different height units.Height in feet * 0.3048 = Height in meter.Height in meter * 3.28084 = Height in feet. " << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
}
