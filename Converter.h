#pragma once
#include <string>
class Converter {
public:
	virtual double toMetric(double value)=0;
	//1. virtual double toMetric(double value) : This function takes a value in the imperial unit and
//converts it into its metric counterpart.
	virtual double toImperial(double value)=0;
	//2. virtual double toImperial(double value) : This function does the opposite.It takes a value in the
	//metric system and converts it to its imperial equivalent.
	virtual void description() const;
	//3. virtual void description() const : This function prints a concise description of the converter class,
//which will specify the kind of conversions it performs.
};

