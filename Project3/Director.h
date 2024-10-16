#pragma once
#include "Human.h"
class Director : public Human
{
	char* company;
	int weekWorkHours;
	double salary;

public:
	Director();
	Director(const char* n, int a, const char* com, int hours, double sal);
	~Director();
	void Print();
	void Salary();
	void Input(const char* n, int a, const char* com, int hours, double sal);
};

