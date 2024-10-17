#include "Human.h"
#include<iostream>
using namespace std;

Human::Human()
{
	name = nullptr;
	age = 0;
}
Human::Human(const char* Name, int Age)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
	age = Age;
}
void Human::Input() // ввод с клавиатуры
{
	if (name != nullptr)
	{
		delete[] name;
	}
	char buff[20];
	cout << "Enter name -> ";
	cin >> buff;
	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);
	cout << "Enter age -> ";
	cin >> age;

}
Human::~Human()
{
	delete[] name;
}
