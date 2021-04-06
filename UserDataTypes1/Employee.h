#pragma once
class Employee {
public:
    void Read();
    void Write();
private:
    char name[32];
    unsigned char initial;
    unsigned short age;
    bool isAdult = false;
    unsigned int zipcode;
    double wage;
    unsigned int daysworked;
    float hoursWorkedPerDay;
    int totalHours = 0;
    double totalWage = 0;
    double afterTax;
    double net;

    static const float TAX;

};

