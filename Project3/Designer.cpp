#include "Designer.h"
#include<iostream>
using namespace std;

Designer::Designer()
{
	name = nullptr;
	age = 0;
	mainProgram = nullptr;
	politicalViews = nullptr;
	salary = 0.0;
}

Designer::Designer(const char* n, int a, const char* program, const char* polit, double sal) : Human(n, a)
{
	mainProgram = new char[strlen(program) + 1];
	strcpy_s(mainProgram, strlen(program) + 1, program);

	politicalViews = new char[strlen(polit) + 1];
	strcpy_s(politicalViews, strlen(polit) + 1, polit);
	salary = sal;
}

Designer::~Designer()
{
	delete[] mainProgram;
	delete[] politicalViews;
}

void Designer::Print()
{
	cout << "Name: " << name << endl << "Age: " << age << endl;
	cout << "Main program: " << mainProgram << endl;
	cout << "Political views: " << politicalViews << endl;
}

void Designer::Salary()
{
	cout << "Salary: " << salary << endl;
}

void Designer::Input(const char* n, int a, const char* program, const char* polit, double sal)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (mainProgram != nullptr)
	{
		delete[] mainProgram;
	}
	if (politicalViews != nullptr)
	{
		delete[] politicalViews;
	}

	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	mainProgram = new char[strlen(program) + 1];
	strcpy_s(mainProgram, strlen(program) + 1, program);

	politicalViews = new char[strlen(polit) + 1];
	strcpy_s(politicalViews, strlen(polit) + 1, polit);
	salary = sal;
}
