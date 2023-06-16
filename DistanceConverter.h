#pragma once
#include "Converter.h"
//create three classes, WeightConverter, DistanceConverter, and HeightConverter, that inherit from
//the Converter base class.These classes will be responsible for weight, distance, and height conversions
//respectively :
class DistanceConverter :public Converter {
public:
	double toMetric(double value) override;
	/*1. double toMetric(double value) override : This function should take the provided value in imperial
		units and convert it to its metric equivalent.*/
	double toImperial(double value) override;
	/*2. double toImperial(double value) override : Similarly, this function should take the provided value
		in metric units and convert it to its imperial equivalent*/
	void description() const override;
	/*3. void description() const override : This function should print a description detailing the specific
		functionality of each converter class.*/
};