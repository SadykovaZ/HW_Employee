#pragma once
#include"Organization.h"
#include"Acounter.h"
#include"Director.h"
#include"HRManager.h"
#include"Janitor.h"
#include"Proger.h"
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class OrganizationConsole
{
public:
	Organization organization;
//public:
	OrganizationConsole();
	void start();
private:
	void startMenu();
	void mainMenu();
	void addEmpMenu() ;
	void removeEmpMenu() ;
	void showInfo() const;

	void setOrgNameMenu();
	void setSalaryMenu();
	//void start();
	
	/*void printMenu1() const;
	void printMenu() const;*/
};

