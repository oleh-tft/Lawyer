#pragma once
#include "Human.h"
class Director : public Human
{
	char* company;
	int weekWorkHours;

public:
	Director();
	Director(const char* n, int a, const char* com, int hours);
	~Director();
	void Output();
	void Input(const char* n, int a, const char* com, int hours);
};

