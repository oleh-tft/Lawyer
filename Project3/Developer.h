#pragma once
#include "Human.h"
class Developer : public Human
{
	char* mainLanguage;
	bool employed;
	double salary;

public:
	Developer();
	Developer(const char* n, int a, const char* lang, bool empl, double sal);
	~Developer();
	void Print();
	void Salary();
	void Input(const char* n, int a, const char* lang, bool empl, double sal);

};

