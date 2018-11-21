#include "Organization.h"

void Organization::setName(string name)
{
	this->name = name;
}

void Organization::setBaseSalary(int baseSalary)
{
	this->baseSalary = baseSalary;
}

Organization::Organization(string name, int baseSalary)
{
	this->name = name;
	this->baseSalary = baseSalary;
}

void Organization::addEmployee(Employee * employee)
{
	employees.push_back(unique_ptr<Employee>(employee));
}

void Organization::delEmployee(Employee * employee)
{
	for (size_t i = 0; i < employees.size(); i++)
	{
		if (employees[i].get() == employee) {
			employees.erase(begin(employees) + i);
			return;
		}
	}
}
void Organization::getInfo() const
{
	for (size_t i = 0; i < employees.size(); i++)
	{
		cout << string(typeid(*employees[i]).name()).substr(6);
		cout << endl;
		employees[i]->info();
		cout << "Salary: " << employees[i]->getSalary()*baseSalary << endl;
		cout << "------------------------------\n";
	}	
}
double Organization::getSalaryFund() const
{
	double res = 0;
	for (size_t i = 0; i < employees.size(); i++)
	{
		res += employees[i]->getSalary()*baseSalary;
	}
	return res;
}

bool Organization::removeEdmployeeById(int id)
{
	for (size_t i = 0; i < employees.size(); i++)
	{
		if (employees[i]->getID() == id)
		{
			employees.erase(begin(employees) + i);
			return true;
		}
	}
	return false;
}

Employee& Organization::operator[](int index)
{
	return *employees[index];
}


