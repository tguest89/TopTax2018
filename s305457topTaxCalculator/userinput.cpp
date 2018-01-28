#include "stdafx.h"
#include <iostream>
#include "userinput.h"

using namespace std;

int userInput() {

	int income;

	cout << "Please insert your gross income: ";
	cin >> income;

	return income;
}
