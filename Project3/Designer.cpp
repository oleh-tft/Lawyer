#include "Designer.h"
#include<iostream>
using namespace std;

Designer::Designer()
{
	name = nullptr;
	age = 0;
	mainProgram = nullptr;
	politicalViews = nullptr;
}

Designer::Designer(const char* n, int a, const char* program, const char* polit) : Human(n, a)
{
	mainProgram = new char[strlen(program) + 1];
	strcpy_s(mainProgram, strlen(program) + 1, program);

	politicalViews = new char[strlen(polit) + 1];
	strcpy_s(politicalViews, strlen(polit) + 1, polit);
}

Designer::~Designer()
{
	delete[] mainProgram;
	delete[] politicalViews;
}

void Designer::Output()
{
	Human::Output();
	cout << "Main program: " << mainProgram << endl;
	cout << "Political views: " << politicalViews << endl << endl;
}

void Designer::Input(const char* n, int a, const char* program, const char* polit)
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
}
