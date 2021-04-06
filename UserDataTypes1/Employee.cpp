#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::TAX = 0.01f;

void Employee::Read(){

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

   

    for (int i = 0; i < daysworked; i++) {
        cout << "enter hours worked for day ?" << ":";
        cin >> hoursWorkedPerDay;
        totalHours += hoursWorkedPerDay;
        totalWage = totalHours * wage;
    }

    if (age >= 18) {
        isAdult == true;
    }
    else {
        isAdult == false;
    }

    net = totalWage * TAX;
    afterTax = totalWage - net;
}

void Employee::Write() {

    cout << " you are: " << name << " " << initial << endl << "Age: " << age << endl << "Zipcode: " << zipcode << endl << "Days worked:" << daysworked << endl << "Total hours: " << totalHours << endl << "Gross pay:" << totalWage << endl << "Net:" << afterTax << endl;

}