#pragma once
#include "Human.h"
class Designer : public Human
{
	char* mainProgram;
	char* politicalViews;

public:
	Designer();
	Designer(const char* n, int a, const char* program, const char* polit);
	~Designer();
	void Output();
	void Input(const char* n, int a, const char* program, const char* polit);
};

