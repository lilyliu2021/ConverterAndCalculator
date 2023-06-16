#include <iostream>
#include "WeightConverter.h"

//create three classes, WeightConverter, DistanceConverter, and HeightConverter, that inherit from
//the Converter base class.These classes will be responsible for weight, distance, and height conversions
//respectively :

double WeightConverter::toMetric(double value) {
	/*1. double toMetric(double value) override : This function should take the provided value in imperial
		units and convert it to its metric equivalent.*/
	return value * 0.453592; //// Conversion factor from pounds to kilograms
	}
	
double WeightConverter::toImperial(double value) {
	/*2. double toImperial(double value) override : Similarly, this function should take the provided value
		in metric units and convert it to its imperial equivalent*/	
	return value * 2.20462;	// Conversion factor from kilograms to pounds
	}
	
void WeightConverter::description() const {
	/*3. void description() const override : This function should print a description detailing the specific
		functionality of each converter class.*/
	std::cout << "----------Weight Converter Description----------" << std::endl;
	std::cout << "Weight converter: Converts between different weight units.Weight in pound * 0.453592 = Height in kilogram.Weight in kilogram * 2.20462 = Weight in pound. " << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	}
	