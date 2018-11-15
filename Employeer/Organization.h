#pragma once
#include<list>
#include"Employee.h"
#include<memory>


Employee*getEmployee();
class Organization
{
	list<unique_ptr<Employee>> empl;

public:
	Organization();
	void addEmployee();
	//void countSalary();
	void printScreen() const;	
};

