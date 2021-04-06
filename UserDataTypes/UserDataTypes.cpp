// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sandwich.h"
using namespace std;
typedef double currency;
typedef unsigned short byte;

struct RGB {
	byte r;
	byte g;
	byte b;
};

void f1();
void f1() {}


int main()
{
	Sandwich sandwich;
	sandwich.Read();
	sandwich.Write();
	cout << SHOP_NAME;
	f1();
	f2();
	currency balance;
	enum class Diffuculty {
		Easy,
		Medium,
		Hard
	};

	Diffuculty difficulty = Diffuculty::Easy;
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
