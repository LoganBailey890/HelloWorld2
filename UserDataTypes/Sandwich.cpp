#include "Sandwich.h"
#include <iostream>


void f2() {
}


void Sandwich::Read() {
	std::cout << "Name: ";
	std::cin >> name;

}

void Sandwich::Write() {
	std::cout << name << std::endl;
}

const float Sandwich::TAX = 0.01f;