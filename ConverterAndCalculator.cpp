// ConverterAndCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Calculator.h"
#include "Converter.h"
#include "WeightConverter.h"
#include "HeightConverter.h"
#include "DistanceConverter.h"
#include "BMICalculator.h"
#include "SpeedCalculator.h"
#include "UserInterface.h"

void calculate(Calculator* calc, double value1, double value2);
void runBMI(int preferredUnit);
void runSpeed(int preferredUnit);

int main()
{
	bool repeat = true;
	while (repeat) {
		int choiceMainMenu = UserInterface::menuChoice("What would you like to do?\nEnter your choice (1 or 2): ", "1.Calculate BMI", "2.Caculate Speed");
		int choiceMetricImperial;
		switch (choiceMainMenu) {
		case 1:
			choiceMetricImperial = UserInterface::menuChoice("Choose your preferred unit system:\nEnter your choice (1 or 2):  ", "1.Metric", "2.Imperial");
			runBMI(choiceMetricImperial);
			break;
		case 2:
			choiceMetricImperial = UserInterface::menuChoice("Choose your preferred unit system:\nEnter your choice (1 or 2):  ", "1.Metric", "2.Imperial");
			runSpeed(choiceMetricImperial);
			break;
		default:
			char response;
			std::cout << "Do you want to perform another calculation? (Y/N): ";
			std::cin >> response;

			if (response == 'Y' || response == 'y') {
				repeat = true;
			}
			else {
				repeat = false;
				
			}
			continue;
		}
		
		char response;
		std::cout << "Do you want to perform another calculation? (Y/N): ";
		std::cin >> response;

		if (response == 'Y' || response == 'y') {
			repeat = true;
		}
		else {
			repeat = false;
		}
		std::cout << "Thank you for using the calculator. Goodbye!\n";
		/*7. After each calculation, ask the user if they want to perform another calculation.If not, thank
			them and terminate the program.* /*/
	}

	return 0;
}


void calculate(Calculator* calc, double value1, double value2) {
	double result = calc->calculate(value1, value2);
	calc->description();
	calc->printResult(result);
}
void runBMI(int preferredUnit) {
	BMICalculator* bmiCalculator = new BMICalculator();
	double weight, height;
	if (preferredUnit == 1) {
		weight = UserInterface::getUserInput("Enter your weight (in kilograms): ");
		height = UserInterface::getUserInput("Enter your height (in meters): ");
		calculate(bmiCalculator, weight, height);
	}
	else if (preferredUnit == 2) {
		weight = UserInterface::getUserInput("Enter your weight (in pounds): ");
		height = UserInterface::getUserInput("Enter your height (in feet): ");
		WeightConverter* weightConverter = new WeightConverter();
		HeightConverter* heightConverter = new HeightConverter();
		weight = weightConverter->toMetric(weight);
		//std::cout << "Weight in metric:" << weight << std::endl;
		height = heightConverter->toMetric(height);
		//std::cout << "Height in metric:" << height << std::endl;
		calculate(bmiCalculator, weight, height);
	}
}
void runSpeed(int preferredUnit) {
	SpeedCalculator* speedCalculator = new SpeedCalculator();
	double distance, time;
	if (preferredUnit == 1) {
		distance = UserInterface::getUserInput("Enter the distance (in kilometers): ");
		time = UserInterface::getUserInput("Enter the time(in hours) : ");
		calculate(speedCalculator, distance, time);
		std::cout << "The user has chosen the metric system, Speed is metric units (kph): \n";
	}
	else if (preferredUnit == 2) {
		distance = UserInterface::getUserInput("Enter the distance (in miles): ");
		time = UserInterface::getUserInput("Enter the time (in hours): ");
		DistanceConverter* distanceConvert = new DistanceConverter();
		double distanceInMetric = distanceConvert->toMetric(distance);
		calculate(speedCalculator, distanceInMetric, time);
		std::cout << "The user has chosen the imperial system, Speed is convert to imperial units (mph): "<<distance/time<<std::endl;
	}
}

	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu

	// Tips for Getting Started: 
	//   1. Use the Solution Explorer window to add/manage files
	//   2. Use the Team Explorer window to connect to source control
	//   3. Use the Output window to see build output and other messages
	//   4. Use the Error List window to view errors
	//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
	//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
