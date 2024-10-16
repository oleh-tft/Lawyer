#include "Teacher.h"
#include<iostream>
using namespace std;

Teacher::Teacher()
{
    name = nullptr;
    age = 0;
    university = nullptr;
    salary = 0.0;
}

Teacher::Teacher(const char* n, int a, const char* univ, double sal) : Human(n, a)
{
    university = new char[strlen(univ) + 1];
    strcpy_s(university, strlen(univ) + 1, univ);
    salary = sal;
}

Teacher::~Teacher()
{
    delete[] university;
}

void Teacher::Print()
{
    Human::Print();
    cout << "University: " << university << endl;
}

void Teacher::Salary()
{
    cout << "Salary: " << salary << endl;
}

void Teacher::Input(const char* n, int a, const char* univ, double sal)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (university != nullptr)
	{
		delete[] university;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

    university = new char[strlen(univ) + 1];
    strcpy_s(university, strlen(univ) + 1, univ);
    salary = sal;
}
