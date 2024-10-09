#pragma once
#include "Human.h"
class Developer : public Human
{
	char* mainLanguage;
	bool employed;

public:
	Developer();
	Developer(const char* n, int a, const char* lang, bool empl);
	~Developer();
	void Output();
	void Input(const char* n, int a, const char* lang, bool empl);

};

