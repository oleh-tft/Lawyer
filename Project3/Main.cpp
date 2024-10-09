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
	Student a("Oleg",19,"Itstep",2000);
	a.Output();
	a.Input("Irina",20,"Politex",200);
	a.Output();

	Lawyer b("Daria", 21, "Custom", false);
	b.Output();
	Teacher c("Mark", 42, "Philosophy", 38999.50);
	c.Output();
	Developer d("Oleh", 22, "Java, C++", false);
	d.Output();
	Designer e("Yan", 20, "Blender", "Moderate");
	e.Output();
	Director f("Mary", 30, "Cool company", 40);
	f.Output();

	b.Input("Daria", 21, "Custom", true);
	b.Output();
}