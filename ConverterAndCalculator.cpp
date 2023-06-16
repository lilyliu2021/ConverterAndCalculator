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
			/*if (choiceMetricImperial == 1) {
				runBMI(1);
			}
			else if (choiceMetricImperial == 2) {
				runBMI(2);
			}*/
			runBMI(choiceMetricImperial);
			break;
		case 2:
			choiceMetricImperial = UserInterface::menuChoice("Choose your preferred unit system:\nEnter your choice (1 or 2):  ", "1.Metric", "2.Imperial");
			runSpeed(choiceMetricImperial);
			break;
		default:
			std::cout << "Invalid choice.Please try again.\n";
		}
		/* 1. Prompt the user to choose their preferred unit system : metric(kilograms and meters) or
	   imperial(pounds and feet).*/
	   //int choice;
	   //std::cout << "Choose your preferred unit system:\n";
	   //std::cout << "1. Metric(kilograms and meters)\n";
	   //std::cout << "2. Imperial(pounds and feet)\n";
	   //std::cout << "Enter your choice (1 or 2): ";
	   //std::cin >> choice;
	   //double weight, height, distance, time;
	   //double weightInMetric, heightInMetric, distanceInMetric;
	   //BMICalculator* bmiCalculator = new BMICalculator();
	   //SpeedCalculator* speedCalculator = new SpeedCalculator();
	   //WeightConverter* weightConverter = new WeightConverter();
	   //HeightConverter* heightConverter = new HeightConverter();
	   //DistanceConverter* distanceConverter = new DistanceConverter();

	   //switch (choice) {
	   //case 1:
	   //	/* 2. Ask the user to input their weight and height in their chosen unit system.*/
	   //	/*std::cout << "Enter your weight (in kilograms): ";
	   //	std::cin >> weight;*/

	   //	/*std::cout << "Enter your height (in meters): ";
	   //	std::cin >> height;*/


	   //	/* 4. Instantiate a BMICalculator object.Use this object to calculate the user's BMI.Print the resulting
	   //	   value and provide a meaningful interpretation.*/
	   //	   //BMICalculator* bmiCalculator = new BMICalculator();
	   //	weight = UserInterface::getUserInput("Enter your weight (in kilograms): ");
	   //	height = UserInterface::getUserInput("Enter your height (in meters): ");
	   //	calculate(bmiCalculator, weight, height);

	   //	/*moved to function calculate
	   //	double bmi = bmiCalculator->calculate(weight, height);
	   //	bmiCalculator->description();
	   //	std::cout << "BMI ";
	   //	bmiCalculator->printResult(bmi);
	   //	std::cout << "BMI Interpretation: " << bmiCalculator->interpretResult(bmi) << std::endl;*/

	   //	/*5. Ask the user for a distance and time.If the user has chosen the imperial system, use the
	   //		DistanceConverter object to convert the distance to the metric system for further calculations.*/
	   //		/*std::cout << "Enter the distance (in kilometers): ";
	   //		std::cin >> distance;
	   //		std::cout << "Enter the time (in hours): ";
	   //		std::cin >> time;*/
	   //	distance = UserInterface::getUserInput("Enter the distance (in kilometers): ");
	   //	time = UserInterface::getUserInput("Enter the time(in hours) : ");
	   //	//SpeedCalculator* speedCalculator = new SpeedCalculator();
	   //	calculate(speedCalculator, distance, time);
	   //	/*moved to function calculate
	   //	double speed = speedCalculator->calculate(distance, time);
	   //	speedCalculator->description();
	   //	std::cout << "Speed(km/h) ";
	   //	speedCalculator->printResult(speed);
	   //	std::cout << "Speed Interpretation: " << speedCalculator->interpretResult(speed) << std::endl;*/
	   //	break;
	   //case 2:
	   //	/* 3. If the user has chosen the imperial system, instantiate a WeightConverter object and a
	   //	HeightConverter object.Use these objects to convert the user's weight and height to the metric
	   //	system for further calculations.*/

	   //	/*std::cout << "Enter your weight (in pounds): ";
	   //	std::cin >> weight;
	   //	std::cout << "Enter your height (in feet): ";
	   //	std::cin >> height;*/
	   //	weight = UserInterface::getUserInput("Enter your weight (in pounds): ");
	   //	height = UserInterface::getUserInput("Enter your height (in feet): ");
	   //	//WeightConverter* weightConverter = new WeightConverter();
	   //	weightInMetric = convert(weightConverter, weight, isMetric);
	   //	//HeightConverter* heightConverter = new HeightConverter();
	   //	heightInMetric = convert(heightConverter, height, isMetric);
	   //	/*moved to function convert
	   //	heightConverter->description();
	   //	std::cout << height << " feet is equal to " << heightConverter->toMetric(weight) << " meters.\n";
	   //	height = heightConverter->toMetric(height);*/

	   //	/* 4. Instantiate a BMICalculator object.Use this object to calculate the user's BMI.Print the resulting value and provide a meaningful interpretation.*/
	   //	//BMICalculator* bmiCalculator = new BMICalculator();
	   //	calculate(bmiCalculator, weightInMetric, heightInMetric);
	   //	/*moved to function calculate
	   //	 double bmi = bmiCalculator->calculate(weight, height);
	   //	 bmiCalculator->description();
	   //	 std::cout << "BMI ";
	   //	 bmiCalculator->printResult(bmi);
	   //	 std::cout << "BMI Interpretation: " << bmiCalculator->interpretResult(bmi) << std::endl;*/

	   //	 /*5. Ask the user for a distance and time.If the user has chosen the imperial system, use the
	   //		 DistanceConverter object to convert the distance to the metric system for further calculations.*/
	   //		 /*std::cout << "Enter the distance (in miles): ";
	   //		 std::cin >> distance;
	   //		 std::cout << "Enter the time (in hours): ";
	   //		 std::cin >> time;*/
	   //	distance = UserInterface::getUserInput("Enter the distance (in miles): ");
	   //	time = UserInterface::getUserInput("Enter the time (in hours): ");
	   //	//DistanceConverter* distanceConverter = new DistanceConverter();
	   //	distanceInMetric = convert(distanceConverter, distance, isMetric);
	   //	/*distanceConverter->description();
	   //	std::cout << distance << "miles is equal to " << distanceConverter->toMetric(distance) << " kilometers.\n";
	   //	distance = distanceConverter->toMetric(distance);*/

	   //	/* 6. Instantiate a SpeedCalculator object.Use this object to calculate the user's speed.Print the
	   //		resulting value and provide a meaningful interpretation.If the user has chosen the imperial
	   //		system, convert the resulting speed back to imperial units for the output.*/
	   //		//SpeedCalculator* speedCalculator = new SpeedCalculator();
	   //	calculate(speedCalculator, distanceInMetric, time);
	   //	/*moved to function calculate
	   //	 double speed = speedCalculator->calculate(distance, time);
	   //	 speed = distanceConverter->toImperial(speed);
	   //	 std::cout << "Speed(mph) ";
	   //	 speedCalculator->printResult(speed);
	   //	 std::cout << "Speed Interpretation: " << speedCalculator->interpretResult(speed) << std::endl;*/
	   //	 if (!isMetric) {
	   //		 std::cout << "The user has chosen the imperial system, convert the resulting speed back to imperial units for the output(mph): \n";
	   //		 double speedInImperial = convert(distanceConverter, distanceInMetric / time, !isMetric);
	   //	 }
	   //	break;	
	   //default:
	   //	std::cout<<"Invalid choice.Please try again.\n";
	   //	continue;
	   //}

		char response;
		std::cout << "Do you want to perform another calculation? (Y/N): ";
		std::cin >> response;

		if (response == 'Y' || response == 'y') {
			repeat = true;
		}
		else {
			repeat = false;
		}
	}

	std::cout << "Thank you for using the calculator. Goodbye!\n";
	/*7. After each calculation, ask the user if they want to perform another calculation.If not, thank
		them and terminate the program.* /*/

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
		std::cout << "Weight in metric:" << weight << std::endl;
		height = heightConverter->toMetric(height);
		std::cout << "Height in metric:" << height << std::endl;
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
		DistanceConverter* distanceConverter = new DistanceConverter();
		calculate(speedCalculator, distance, time);
		std::cout << "The user has chosen the imperial system, Speed is imperial units (mph): \n";
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
