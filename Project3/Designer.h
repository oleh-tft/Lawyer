#pragma once
#include "Human.h"
class Designer : public Human
{
	char* mainProgram;
	char* politicalViews;
	double salary;

public:
	Designer();
	Designer(const char* n, int a, const char* program, const char* polit, double sal);
	~Designer();
	void Print();
	void Salary();
	void Input(const char* n, int a, const char* program, const char* polit, double sal);
};

