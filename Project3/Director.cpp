#include "Director.h"
#include<iostream>
using namespace std;

Director::Director()
{
	name = nullptr;
	age = 0;
	company = nullptr;
	weekWorkHours = 0;
}

Director::Director(const char* n, int a, const char* com, int hours) : Human(n, a)
{
	company = new char[strlen(com) + 1];
	strcpy_s(company, strlen(com) + 1, com);
	weekWorkHours = hours;
}

Director::~Director()
{
	delete[] company;
}

void Director::Output()
{
	Human::Output();
	cout << "Company: " << company << endl;
	cout << "Week work hours amount: " << weekWorkHours << endl << endl;
}

void Director::Input(const char* n, int a, const char* com, int hours)
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
}
