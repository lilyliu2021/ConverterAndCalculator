#include <iostream>
#include "DistanceConverter.h"

//create three classes, WeightConverter, DistanceConverter, and HeightConverter, that inherit from
//the Converter base class.These classes will be responsible for weight, distance, and height conversions
//respectively :

double DistanceConverter::toMetric(double value) {
	/*1. double toMetric(double value) override : This function should take the provided value in imperial
		units and convert it to its metric equivalent.*/
	return value * 1.60934; // Conversion factor from miles to kilometers
}

double DistanceConverter::toImperial(double value) {
	/*2. double toImperial(double value) override : Similarly, this function should take the provided value
		in metric units and convert it to its imperial equivalent*/
	return value * 0.621371; // Conversion factor from kilometers to miles
}

void DistanceConverter::description() const {
	/*3. void description() const override : This function should print a description detailing the specific
		functionality of each converter class.*/
	std::cout << "----------Distance Converter Description----------" << std::endl;
	std::cout << "Distance converter: Converts between different distance units. Distance in kilometers * 0.621371 = Distance in miles.Distance in miles * 1.609344 = Distance in kilometers." << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}
