#include<iostream>
#include<string>
#include"employee.h"
using namespace std;

Employee::Employee()
	:name("No name yet"), ssn("No ssn yet"), netPay(0) {}
Employee::Employee(const string& theName, const string& theSsn)
	:name(theName), ssn(theSsn), netPay(0){}
void Employee::setName(const string& newName) {
	name = newName;
}
void Employee::setSsn(const string& newNumber) {
	ssn = newNumber;
}
void Employee::setNetPay(const double newNetPay) {
	netPay = newNetPay;
}
string Employee::getName() const { return name; }
string Employee::getSsn() const { return ssn; }
double Employee::getNetPay() const { return netPay; }

void Employee::printCheck() const {
	cout << "\nERROR: printCheck FUNCTION CALLED FOR AN \n"
		 << "UNDIFFERENTIATED EMPLOYEE. Aborting the program.\n"
		 << "Check with the author of the program about this bug.\n";
	exit(1);
}