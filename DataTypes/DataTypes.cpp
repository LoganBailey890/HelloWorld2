// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    string name;
    unsigned char initial;
    unsigned short age;
    bool isAdult = false;
    unsigned int zipcode;
    double wage;
    unsigned int daysworked;
    float hoursWorkedPerDay;
    float TAX = 0.1f;

    cout << "enter your first name\n";
    cin >> name;
    cout << "enter the first initial of your last name\n";
    cin >> initial;
    cout << "Please enter your age\n";
    cin >> age;
    cout << "Please enter your zipcode\n";
    cin >> zipcode;
    cout << " enter your hourly wage\n";
    cin >> wage;
    cout << "Please enter days worked this week\n";
    cin >> daysworked;

    int totalHours = 0;
    double totalWage = 0;

    for (int i = 0; i < daysworked; i++) {
        cout << "enter hours worked for day ?" << ":";
        cin >> hoursWorkedPerDay;
        totalHours += hoursWorkedPerDay;
        totalWage = totalHours * wage;
    }

    if (age >= 18) {
        isAdult = true;
    }
    else {
        isAdult = false;
    }

    double net = totalWage * TAX;
    double afterTax = totalWage - net;

    cout << " you are: " << name << " " << initial << endl << "Age: " << age << endl << "Zipcode: " << zipcode << endl << "Days worked:" << daysworked << endl << "Total hours: " << totalHours << endl << "Gross pay:" << totalWage << endl << "Net:" << afterTax << endl;






    
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
