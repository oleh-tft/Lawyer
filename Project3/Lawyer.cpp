#include "Lawyer.h"
#include<iostream>
using namespace std;

Lawyer::Lawyer()
{
	name = nullptr;
	age = 0;
	company = nullptr;
	attendedCourt = false;
	salary = 0.0;
}

Lawyer::Lawyer(const char* n, int a, const char* comp, bool attended, double sal) : Human(n, a)
{
	company = new char[strlen(comp) + 1];
	strcpy_s(company, strlen(comp) + 1, comp);
	attendedCourt = attended;
	salary = sal;
}

Lawyer::~Lawyer()
{
	delete[] company;
}

void Lawyer::Print()
{
	cout << "Name: " << name << endl << "Age: " << age << endl;
	cout << "Company: " << company << endl;
	cout << "Attended court: " << attendedCourt << endl;
}

void Lawyer::Salary()
{
	cout << "Salary: " << salary << endl;
}

void Lawyer::Input(const char* n, int a, const char* comp, bool attended, double sal)
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

	company = new char[strlen(comp) + 1];
	strcpy_s(company, strlen(comp) + 1, comp);
	attendedCourt = attended;
	salary = sal;
}
