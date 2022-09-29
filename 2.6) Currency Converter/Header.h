#pragma once
#include <iostream>

using namespace std;

void DollarInputFunction() {
	setlocale(0, "");
	cout << "¬ведите сумму в долларах: ";
}

void PrimaryIndentation() {
	std::cout << std::endl;
}

void DollarEquals() {
	setlocale(0, "");
	cout << " долларов равно:" << std::endl << std::endl;
}

void PoundEquals() {
	setlocale(0, "");
	cout << " ‘унтов." << std::endl << std::endl;
}

void FrankEquals() {
	setlocale(0, "");
	cout << " ‘раков." << std::endl << std::endl;
}

void GermanMarkEquals() {
	setlocale(0, "");
	cout << " германских марок." << std::endl << std::endl;
}

void JaponYenEquals() {
	setlocale(0, "");
	cout << " €понских ен." << std::endl;
}