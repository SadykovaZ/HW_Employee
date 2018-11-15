#include"Organization.h"
#include"Acounter.h"
#include"Director.h"
#include"HRManager.h"
#include"Janitor.h"
#include"Proger.h"
#include<vector>

Employee * getEmployee()
{
	int wY1;	
	double slr1;
	string name1;
	int age1;
	string sex1;
	bool knowledge1 = 1, conditions1 = 0;
	int lang1 = 2;
	cout << "Enter working expirience: ";
	cin >> wY1;
	cout << "Enter salary: ";
	cin >> slr1;
	cout << "Enter name: ";
	cin >> name1;
	cout << "Enter age:";
	cin >> age1;
	cout << "Enter sex: ";
	cin >> sex1;
	cout << "Enter  ";

	int choice;
	cout << "Chooce employee: \n0-Acounter\n1-Director\n2-Hr Manager\n3-Janitor\n4-Proger\n";
	cin >> choice;
	switch (choice)
	{
	case 0:
		return new Acounter(name1, age1, sex1, wY1, knowledge1);		
	case 1:
		return new Director(name1, age1, sex1, wY1);
	case 2:
		return new HRManager(name1, age1, sex1, wY1, knowledge1);
	case 3:
		return new Janitor(name1, age1, sex1, wY1, conditions1);
	case 4:
		return new Proger(name1, age1, sex1, wY1, lang1, knowledge1);
	}
	
}
void main()
{
	Organization o;
	o.addEmployee();	
	o.printScreen();
	system("pause");
}
