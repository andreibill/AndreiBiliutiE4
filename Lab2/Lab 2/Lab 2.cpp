#include <iostream>
#include "Student.h"



int main()
{
	Student student;
	Student student_2{};

	student_2.SetGrade(7);
	student_2.SetName("Andrei Biliuti");
	student = student_2.GetThisStudent();
	
	student.GetGrade();
	student.GetName();


	
}
