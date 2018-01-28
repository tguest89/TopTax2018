#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <stdio.h>
#include "writetofile.h"
#include "toptax.h"
#include "userinput.h"


using namespace std;


void writeToFile(int userInput, double topTax) {

	
	time_t currentTime;
	struct tm *timeInfo;

	time (&currentTime);
	timeInfo = localtime(&currentTime);

	/* 
		I wanted to add a timestamp to the output, but I got warnings about using the approach that has been commented out in this file. 
		Do you have any tips or comments regarding how to do this in a safe way? 
	*/

	const char *path = "C:/toptax_s305457.txt";
	std::ofstream taxFile(path, ios::app);


	taxFile << "[Local time]: " << asctime(timeInfo) << "\nYour income: " << userInput << "kr. \nTop tax to pay: " << topTax <<"kr. \n(Based on toptax-ratings for 2018) \n\n";
	taxFile << "//////////////// END //////////////// \n\n\n";
	taxFile.close();
}
