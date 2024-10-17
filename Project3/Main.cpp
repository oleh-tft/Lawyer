#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Lawyer.h"
#include "Teacher.h"
#include "Developer.h"
#include "Designer.h"
#include "Director.h"
using namespace std;

void Choose()
{
	Human* human = nullptr;
	int pick = 0;
	int action = 0;

	cout << "1. Student" << endl;
	cout << "2. Lawyer" << endl;
	cout << "3. Teacher" << endl;
	cout << "4. Developer" << endl;
	cout << "5. Designer" << endl;
	cout << "6. Director" << endl;
	cout << "Choose subject: ";
	cin >> pick;

	cout << "1. Show inforamtion" << endl;
	cout << "2. Show salary" << endl;
	cout << "Choose action: ";
	cin >> action;

	switch (pick)
	{
	case 1:
		human = new Student("Oleg", 19, "Itstep", 2000);
		break;
	case 2:
		human = new Lawyer("Daria", 21, "Custom", false, 40000.0);
		break;
	case 3:
		human = new Teacher("Mark", 42, "Philosophy", 38999.50);
		break;
	case 4:
		human = new Developer("Oleh", 22, "Java, C++", false, 999500.0);
		break;
	case 5:
		human = new Designer("Yan", 20, "Blender", "Moderate", 250000.0);
		break;
	case 6:
		human = new Director("Mary", 30, "Cool company", 40, 180909.0);
		break;
	}

	switch (action)
	{
	case 1:
		human->Print();
		break;
	case 2:
		human->Salary();
		break;
	}

	delete human;
}

int main()
{
	Human* arr[6] {
		new Student("Oleg", 19, "Itstep", 2000),
		new Lawyer("Daria", 21, "Custom", false, 40000.0),
		new Teacher("Mark", 42, "Philosophy", 38999.50),
		new Developer("Oleh", 22, "Java, C++", false, 999500.0),
		new Designer("Yan", 20, "Blender", "Moderate", 250000.0),
		new Director("Mary", 30, "Cool company", 40, 180909.0)
	};

	for (int i = 0; i < 6; i++)
	{
		arr[i]->Print();
		arr[i]->Salary();
		cout << endl;
		delete arr[i];
	}
}