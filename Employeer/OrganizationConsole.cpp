#include "OrganizationConsole.h"
OrganizationConsole::OrganizationConsole() : organization("Almaty", 100000)
{
	cout << "\n-----Welcome to Almaty organization-----" << endl;
}

void OrganizationConsole::start()
{
	int ch = 0;
	int ch1 = 0;
	int ch2 = 0;
	while (ch != 4)
	{

		cout << endl;
		printMenu();
		cout << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
		again:
			cout << "Which profession do you want to add: " << endl;
			printMenu1();
			cin >> ch1;
			while (ch1 != 6)
			{
				switch (ch1)
				{
				case 1:
					organization.addEmployee(new Acounter("Pete", 30, "Male", 15, 1));
					goto again;
					break;
				case 2:
					organization.addEmployee(new Director("Andy", 50, "Male", 20));
					goto again;
					break;
				case 3:
					organization.addEmployee(new HRManager("Loli", 45, "Female", 10, 1));
					goto again;
					break;
				case 4:
					organization.addEmployee(new Janitor("Bobi", 25, "Male", 3, 1));
					goto again;
					break;
				case 5:
					organization.addEmployee(new Proger("Lui", 30, "Male", 5, 6, 1));
					goto again;
					break;
				}
			}
		}
		break;
		case 2:
		{
		again1:
			cout << "Which profession do you want to delete: " << endl;
			printMenu1();
			cin >> ch2;
			while (ch2 != 6)
			{
				switch (ch2)
				{
				case 1:
					organization.delEmployee((Acounter*)("Pete", 30, "Male", 15, 1));
					goto again1;
					break;
				case 2:
					organization.delEmployee((Director*)("Andy", 50, "Male", 20));
					goto again1;
					break;
				case 3:
					organization.delEmployee((HRManager*)("Loli", 45, "Female", 10, 1));
					goto again1;
					break;
				case 4:
					organization.delEmployee((Janitor*)("Bobi", 25, "Male", 3, 1));
					goto again1;
					break;
				case 5:
					organization.delEmployee((Proger*)("Lui", 30, "Male", 5, 6, 1));
					goto again1;
					break;
				}
			}
		}
		break;
		case 3:
		{
			organization.getInfo();
		}
		break;
		}
	}
}

void OrganizationConsole::printMenu1() const
{
	cout << "1- Acounter;\n2- Director;\n3- HR Manager;\n4- Janitor;\n5- Proger;\n6- Done" << endl;
}

void OrganizationConsole::printMenu() const
{
	cout << "1- Add employee;\n2- Delete employee;\n3- Show information;\n4- Exit;" << endl;
}
