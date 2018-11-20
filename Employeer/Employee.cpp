#include "Employee.h"
Employee::Employee(string name, int age, string sex, int workYears)
	:Human(name, age, sex)
{
	this->workYears = workYears;
}
void Employee::setWorkYears(int workYears)
{
	this->workYears = workYears;
}
void Employee::info() const
{
	Human::info();
	cout << "Working years: " << workYears << endl;
}

