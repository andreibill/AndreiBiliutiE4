#include <iostream>
#include "Student.h"

int cmpName(Student x, Student y) {
	return strcmp(x.getName(), y.getName());
}
int cmpMathG(Student x, Student y) {
	if (x.getMathG() > y.getMathG())
		return 1;
	else if (x.getMathG() < y.getMathG())
		return -1;
	return 0;
}
int cmpEnglishG(Student x, Student y) {
	if (x.getEnglishG() > y.getEnglishG())
		return 1;
	else if (x.getEnglishG() < y.getEnglishG())
		return -1;
	return 0;
}
int cmpHistoryG(Student x, Student y) {
	if (x.getHistoryG() > y.getHistoryG())
		return 1;
	else if (x.getHistoryG() < y.getHistoryG())
		return -1;
	return 0;
}
int cmpAverage(Student x, Student y) {
	if (x.averageG() > y.averageG())
		return 1;
	else if (x.averageG() < y.averageG())
		return -1;
	return 0;
}

int main()
{
	Student s;
	char name[30] = "Andrei Biliuti";
	s.setName(name);
	s.setMathG(6.7);
	s.setEnglishG(9.5);
	s.setHistoryG(10);
	Student s2;
	char name2[30] = "Ionut Popescu";
	s2.setName(name2);
	s2.setMathG(7.2);
	s2.setEnglishG(8.3);
	s2.setHistoryG(9.9);
	printf("Nume: %s \n", s.getName());
	printf("Nota Mate: %.2f \n", s.getMathG());
	printf("Nota Engleza: %.2f \n", s.getEnglishG());
	printf("Nota Istorie: %.2f \n", s.getHistoryG());
	printf("Avergae note: %.2f \n", s.averageG());
	printf("%d \n", cmpName(s, s2));
	printf("%d \n", cmpMathG(s, s2));
	printf("%d \n", cmpEnglishG(s, s2));
	printf("%d \n", cmpHistoryG(s, s2));
	printf("%d \n", cmpAverage(s, s2));
}
