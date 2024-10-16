#pragma once
class Human  // base class
{
protected:
	char* name;
	int age;
public:
	Human();
	Human(const char* Name, int Age);
	~Human();
	virtual void Print();
	virtual void Salary();
	void Input();

};