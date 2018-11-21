#include "OrganizationConsole.h"
OrganizationConsole::OrganizationConsole() : organization("", 0)
{
	startMenu();
	//mainMenu();

}
void OrganizationConsole::start()
{
	mainMenu();

}
void OrganizationConsole::startMenu()
{
	system("cls");
	cout << "Welcome!";
	Sleep(2000);
	this->setOrgNameMenu();
	this->setSalaryMenu();

}
void OrganizationConsole::mainMenu()
{
	system("cls");


	int choice = 0;

	while (choice != 4)
	{
		system("cls");
		cout << "Organization name: " << organization.getName();
		cout << "\nSalary: " << organization.getBaseSalary();
		cout << "\nCount of employees: " << organization.getCountOfEmp();
		cout << "\n\n----------------------------\n\n";
		cout << "1. Add new employee\n2. Dismiss employee\n3. Show employee info\n4. Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1: addEmpMenu();
			break;
		case 2:
			removeEmpMenu();
			
			break;
		case 3:
			showInfo();
			system("pause");
			break;
		case 4:
			break;
		default:
			cout << "Unknow command\nPress any key to continue\n";
			system("pause");
			system("cls");
			break;
		}
	}
	cout << "Bye bye\n";
}
void OrganizationConsole::addEmpMenu()
{

	size_t ch;

	while (1)
	{

		system("cls");
		cout << "Choose position\n";
		cout << "1. Acounter\n2. Proger\n3. Director\n4. HR Manager\n5. Janitor\n6. Main menu\n";
		cin >> ch;
		if (ch > 5)
		{
			cout << "Unknown position\n";
			system("pause");
		}
		else
			break;
	}
	if (ch == 6)
		return;
	string name;
	int age;
	string sex;
	int exp;
	system("cls");
	cout << "Set employee name\n";
	cin >> name;

	cout << "Set employee age\n";
	cin >> age;

	cout << "Set employee sex\n";
	cin >> sex;

	cout << "Set employee experience\n";
	cin >> exp;
	Employee* emp = nullptr;

	switch (ch)
	{
	case 1:
		bool k1C;
		cout << "1C experence?\n";
		cin >> k1C;
		emp = new Acounter(name, age, sex, exp, k1C);
		break;
	case 2:
		int cntL;
		bool edu;
		cout << "Set count of known languages: \n";
		cin >> cntL;
		cout << "High Eductaion? \n";
		cin >> edu;
		emp = new Proger(name, age, sex, exp, cntL, edu);
		break;
	case 3:
		emp = new Director(name, age, sex, exp);
		break;
	case 4:
		bool edu1;
		cout << "Education?\n";
		cin >> edu1;
		emp = new HRManager(name, age, sex, exp, edu);
		break;
	case 5:
		bool harm;
		cout << "Harm conditions?\n";
		cin >> harm;
		emp = new Janitor(name, age, sex, exp, harm);
		break;
	}
	system("cls");
	organization.addEmployee(emp);
	cout << "Employee added!\n";
	system("pause");
}
void OrganizationConsole::removeEmpMenu()
{
	while (1)
	{

		cout << "Choose ID of employee to remove" << endl;
		for (size_t i = 0; i < organization.getCountOfEmp(); i++)
		{
			cout << setw(3) << organization[i].getID() << setw(10) << string(typeid(organization[i]).name()).substr(6) << setw(5) << organization.getName();
		}
		int ch;
		cin >> ch;
		if (!organization.removeEdmployeeById(ch))
		{
			cout << "incorrect id\n";
			system("pause");
			continue;
		}
		cout << "Employee dismissed\n";
		system("pause");
		return;
	}
}
void OrganizationConsole::showInfo() const
{
	system("cls");
	organization.getInfo();
}
void OrganizationConsole::setOrgNameMenu()
{
	system("cls");
	cout << "Set organization name\n";
	string name;
	cin >> name;
	organization.setName(name);
}
void OrganizationConsole::setSalaryMenu()
{
	system("cls");
	cout << "Set base Salary\n";
	int sal;
	cin >> sal;
	organization.setBaseSalary(sal);
}
//
//void OrganizationConsole::start()
//{
//	int ch = 0;
//	int ch1 = 0;
//	int ch2 = 0;
//	while (ch != 4)
//	{
//		cout << endl;
//		printMenu();
//		cout << endl;
//		cin >> ch;
//		switch (ch)
//		{
//		case 1:
//		{
//		again:
//			cout << "Which profession do you want to add: " << endl;
//			printMenu1();
//			cin >> ch1;
//			while (ch1 != 6)
//			{
//				switch (ch1)
//				{
//				case 1:
//					
//					organization.addEmployee(new Acounter("Pete", 30, "Male", 15, 1));
//					goto again;
//					break;
//				case 2:
//					organization.addEmployee(new Director("Andy", 50, "Male", 20));
//					goto again;
//					break;
//				case 3:
//					organization.addEmployee(new HRManager("Loli", 45, "Female", 10, 1));
//					goto again;
//					break;
//				case 4:
//					organization.addEmployee(new Janitor("Bobi", 25, "Male", 3, 1));
//					goto again;
//					break;
//				case 5:
//					organization.addEmployee(new Proger("Lui", 30, "Male", 5, 6, 1));
//					goto again;
//					break;
//				}
//			}
//		}
//		break;
//		case 2:
//		{
//		again1:
//			cout << "Which profession do you want to delete: " << endl;
//			printMenu1();
//			cin >> ch2;
//			while (ch2 != 6)
//			{
//				switch (ch2)
//				{
//				case 1:
//					
//					organization.delEmployee((Acounter*)("Pete", 30, "Male", 15, 1));
//					goto again1;
//					break;
//				case 2:
//					organization.delEmployee((Director*)("Andy", 50, "Male", 20));
//					goto again1;
//					break;
//				case 3:
//					organization.delEmployee((HRManager*)("Loli", 45, "Female", 10, 1));
//					goto again1;
//					break;
//				case 4:
//					organization.delEmployee((Janitor*)("Bobi", 25, "Male", 3, 1));
//					goto again1;
//					break;
//				case 5:
//					organization.delEmployee((Proger*)("Lui", 30, "Male", 5, 6, 1));
//					goto again1;
//					break;
//				}
//			}
//		}
//		break;
//		case 3:
//		{
//			organization.getInfo();
//		}
//		break;
//		}
//	}
//}
//
//void OrganizationConsole::printMenu1() const
//{
//	cout << "1- Acounter;\n2- Director;\n3- HR Manager;\n4- Janitor;\n5- Proger;\n6- Done" << endl;
//}
//
//void OrganizationConsole::printMenu() const
//{
//	cout << "1- Add employee;\n2- Delete employee;\n3- Show information;\n4- Exit;" << endl;
//}
