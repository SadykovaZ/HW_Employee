#pragma once
#include<list>
#include"Employee.h"
#include<memory>
#include"Acounter.h"
#include"Director.h"
#include"HRManager.h"
#include"Janitor.h"
#include"Proger.h"

Employee*getEmployee();
class Organization
{
	list<unique_ptr<Employee>> empl;

public:
	Organization();
	void addEmployee();
	//void countSalary() const;
	void printScreen() const;	
};

