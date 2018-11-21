#include"OrganizationConsole.h"
void main()
{
	OrganizationConsole org;
	
	org.organization.addEmployee(new Acounter("P", 30, "m", 15, 1));
	org.organization.addEmployee(new Acounter("P", 30, "m", 15, 1));
	org.organization.addEmployee(new Acounter("P", 30, "m", 15, 1));

	org.start();
	system("pause");
}