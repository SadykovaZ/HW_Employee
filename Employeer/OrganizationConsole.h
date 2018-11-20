#pragma once
#include"Organization.h"
#include"Acounter.h"
#include"Director.h"
#include"HRManager.h"
#include"Janitor.h"
#include"Proger.h"

class OrganizationConsole
{
	Organization organization;
public:
	OrganizationConsole();
	void start();
private:
	void printMenu1() const;
	void printMenu() const;
};

