#pragma once
#include "Human.h"
class Teacher : public Human
{
	char* university;
	double salary;

public:
	Teacher();
	Teacher(const char* n, int a, const char* univ, double sal);
	~Teacher();
	void Output();
	void Input(const char* n, int a, const char* univ, double sal);
};

