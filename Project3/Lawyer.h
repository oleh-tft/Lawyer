#pragma once
#include "Human.h"
class Lawyer : public Human
{
	char* company;
	bool attendedCourt;
	double salary;

public:
	Lawyer();
	Lawyer(const char* n, int a, const char* comp, bool attended, double sal);
	~Lawyer();
	void Print();
	void Salary();
	void Input(const char* n, int a, const char* comp, bool attended, double sal);
};

