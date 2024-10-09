#pragma once
#include "Human.h"
class Lawyer : public Human
{
	char* company;
	bool attendedCourt;

public:
	Lawyer();
	Lawyer(const char* n, int a, const char* comp, bool attended);
	~Lawyer();
	void Output();
	void Input(const char* n, int a, const char* comp, bool attended);
};

