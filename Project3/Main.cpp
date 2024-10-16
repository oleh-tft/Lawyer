#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Lawyer.h"
#include "Teacher.h"
#include "Developer.h"
#include "Designer.h"
#include "Director.h"
using namespace std;

int main()
{
	Human* human = nullptr;
	int pick = 0;

	cout << "1. Student info\t\t 2. Student scholarship" << endl;
	cout << "3. Lawyer info\t\t 4. Lawyer salary" << endl;
	cout << "5. Teacher info\t\t 6. Teacher salary" << endl;
	cout << "7. Developer info\t 8. Developer salary" << endl;
	cout << "9. Designer info\t 10. Designer salary" << endl;
	cout << "11. Director info\t 12. Director salary" << endl << endl;
	cout << "Choose option: ";
	cin >> pick;

	switch (pick)
	{
	case 1:
		human = new Student("Oleg", 19, "Itstep", 2000);
		break;
	case 2:
		human = new Student("Oleg", 19, "Itstep", 2000);
		break;
	case 3:
		human = new Lawyer("Daria", 21, "Custom", false, 40000.0);
		break;
	case 4:
		human = new Lawyer("Daria", 21, "Custom", false, 40000.0);
		break;
	case 5:
		human = new Teacher("Mark", 42, "Philosophy", 38999.50);
		break;
	case 6:
		human = new Teacher("Mark", 42, "Philosophy", 38999.50);
		break;
	case 7:
		human = new Developer("Oleh", 22, "Java, C++", false, 999500.0);
		break;
	case 8:
		human = new Developer("Oleh", 22, "Java, C++", false, 999500.0);
		break;
	case 9:
		human = new Designer("Yan", 20, "Blender", "Moderate", 250000.0);
		break;
	case 10:
		human = new Designer("Yan", 20, "Blender", "Moderate", 250000.0);
		break;
	case 11:
		human = new Director("Mary", 30, "Cool company", 40, 180909.0);
		break;
	case 12:
		human = new Director("Mary", 30, "Cool company", 40, 180909.0);
		break;
	}

	if (pick % 2 != 0)
	{
		human->Print();
	}
	else
	{
		human->Salary();
	}
}