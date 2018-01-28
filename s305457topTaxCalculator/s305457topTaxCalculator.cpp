// s305457topTaxCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "toptax.h"
#include "userinput.h"
#include "writetofile.h"

using namespace std;


int main(int argc, char *argv[])
{
	int usersGrossIncome;
	double totalTaxAmount;

	usersGrossIncome = userInput();
	totalTaxAmount = topTax(usersGrossIncome);


	cout << "Based on your income of " << usersGrossIncome << "kr, you will have to pay a total amount of " << totalTaxAmount << "kr in taxes using Top tax. \n";

	writeToFile(usersGrossIncome, totalTaxAmount);

	system("pause");

	return 0;
}

