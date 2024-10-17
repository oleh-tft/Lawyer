#include "Director.h"
#include<iostream>
using namespace std;

Director::Director()
{
	name = nullptr;
	age = 0;
	company = nullptr;
	weekWorkHours = 0;
	salary = 0.0;
}

Director::Director(const char* n, int a, const char* com, int hours, double sal) : Human(n, a)
{
	company = new char[strlen(com) + 1];
	strcpy_s(company, strlen(com) + 1, com);
	weekWorkHours = hours;
	salary = sal;
}

Director::~Director()
{
	delete[] company;
}

void Director::Print()
{
	cout << "Name: " << name << endl << "Age: " << age << endl;
	cout << "Company: " << company << endl;
	cout << "Week work hours amount: " << weekWorkHours << endl;
}

void Director::Salary()
{
	cout << "Salary: " << salary << endl;
}

void Director::Input(const char* n, int a, const char* com, int hours, double sal)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (company != nullptr)
	{
		delete[] company;
	}

	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	company = new char[strlen(com) + 1];
	strcpy_s(company, strlen(com) + 1, com);
	weekWorkHours = hours;
	salary = sal;
}
