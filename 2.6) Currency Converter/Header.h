#pragma once
#include <iostream>

using namespace std;

void DollarInputFunction() {
	setlocale(0, "");
	cout << "������� ����� � ��������: ";
}

void PrimaryIndentation() {
	std::cout << std::endl;
}

void DollarEquals() {
	setlocale(0, "");
	cout << " �������� �����:" << std::endl << std::endl;
}

void PoundEquals() {
	setlocale(0, "");
	cout << " ������." << std::endl << std::endl;
}

void FrankEquals() {
	setlocale(0, "");
	cout << " ������." << std::endl << std::endl;
}

void GermanMarkEquals() {
	setlocale(0, "");
	cout << " ���������� �����." << std::endl << std::endl;
}

void JaponYenEquals() {
	setlocale(0, "");
	cout << " �������� ��." << std::endl;
}