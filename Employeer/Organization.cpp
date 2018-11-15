#include "Organization.h"
Organization::Organization()
{
}

void Organization::addEmployee()
{
	this->empl.push_back(unique_ptr<Employee>(getEmployee()));	
}

//void Organization::countSalary()
//{
//	
//}

void Organization::printScreen() const
{
	
	cout << "Employee : \n";
	
	for (auto&i : empl)
	{
		string tp = typeid(*i).name();
		tp = tp.substr(6) + " ";
		cout << tp;
		i->info();
	}
}
