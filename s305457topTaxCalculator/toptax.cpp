#include "stdafx.h"
#include "toptax.h"
#include "userinput.h"


double topTax(int a) {
	int grossIncome = a;

	constexpr int incomeLimit1 = 169000;
	constexpr int incomeLimit2 = 237900;
	constexpr int incomeLimit3 = 598050;
	constexpr int incomeLimit4 = 962050;

	constexpr double taxAmount1 = (incomeLimit2 - incomeLimit1)*1.4 / 100;
	constexpr double taxAmount2 = (incomeLimit3 - incomeLimit2)*3.3 / 100;
	constexpr double taxAmount3 = (incomeLimit4 - incomeLimit3)*12.4 / 100;

	double totalTax = 0;

	//test

	if (grossIncome > incomeLimit4) {

		int differential = grossIncome - incomeLimit4;
		double thisTierTaxAmount = (differential * 15.4) / 100;

		totalTax = thisTierTaxAmount + taxAmount3 + taxAmount2 + taxAmount1;

	}
	else if (grossIncome > incomeLimit3 && grossIncome <= incomeLimit4) {

		int differential = grossIncome - incomeLimit3;
		double thisTierTaxAmount = (differential * 12.4) / 100;

		totalTax = thisTierTaxAmount + taxAmount2 + taxAmount1;

	}
	else if (grossIncome > incomeLimit2 && grossIncome <= incomeLimit3) {

		int differential = grossIncome - incomeLimit2;
		double thisTierTaxAmount = (differential * 3.3) / 100;

		totalTax = thisTierTaxAmount + taxAmount1;

	}
	else if (grossIncome > incomeLimit1 && grossIncome <= incomeLimit2) {

		int differential = grossIncome - incomeLimit1;
		double thisTierTaxAmount = (differential * 1.4) / 100;

		totalTax = thisTierTaxAmount;

	}/*
	else if (grossIncome < incomeLimit1) {

		totalTax = 0;

	}*/

	return totalTax;

}
