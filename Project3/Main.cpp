#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Lawyer.h"
using namespace std;

int main()
{
	Student a("Oleg",19,"Itstep",2000);
	a.Output();
	a.Input("Irina",20,"Politex",200);
	a.Output();

	Lawyer b("Daria", 21, "Custom", false);
	b.Output();
}