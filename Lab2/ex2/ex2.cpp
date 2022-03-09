#include <iostream>
#include "Student.h"

int main()
{
	Student s;
	char name[30] = "Andrei Biliuti";
	s.setName(name);
	s.setMathG(6.7);
	s.setEnglishG(9.5);
	s.setHistoryG(10);
	printf("Nume: %s \n", s.getName());
	printf("Nota Mate: %.2f \n", s.getMathG());
	printf("Nota Engleza: %.2f \n", s.getEnglishG());
	printf("Nota Istorie: %.2f \n", s.getHistoryG());
	printf("Avergae note: %.2f \n", s.averageG());
}
