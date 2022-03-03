#include <string.h>

class Student {
private:
	char name[100];
	unsigned int grade;

public:

	
	void SetGrade(unsigned int grade);
	
	void GetGrade();

	void SetName(const char* newName);

	void GetName();

	Student& GetThisStudent();

};