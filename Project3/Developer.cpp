#include "Developer.h"
#include<iostream>
using namespace std;

Developer::Developer()
{
	name = nullptr;
	age = 0;
	mainLanguage = nullptr;
	employed = false;
}

Developer::Developer(const char* n, int a, const char* lang, bool empl) : Human(n, a)
{
	mainLanguage = new char[strlen(lang) + 1];
	strcpy_s(mainLanguage, strlen(lang) + 1, lang);
	employed = empl;
}

Developer::~Developer()
{
	delete[] mainLanguage;
}

void Developer::Output()
{
	Human::Output();
	cout << "Main Language: " << mainLanguage << endl;
	cout << "Currently employed: " << employed << endl << endl;
}

void Developer::Input(const char* n, int a, const char* lang, bool empl)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (mainLanguage != nullptr)
	{
		delete[] mainLanguage;
	}

	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	mainLanguage = new char[strlen(lang) + 1];
	strcpy_s(mainLanguage, strlen(lang) + 1, lang);
	employed = empl;
}
