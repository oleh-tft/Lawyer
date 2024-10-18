#pragma once
class Human  // base class
{
protected:
	char* name;
	int age;
public:
	Human();
	Human(const char* Name, int Age);
	virtual ~Human() = 0;
	virtual void Print() = 0;
	virtual void Salary() = 0;
	void Input();

};