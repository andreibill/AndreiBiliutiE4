#include<iostream>
#include "Student.h"



	void Student::SetGrade(unsigned int grade) {
		this->grade = grade;
	}

	void Student::GetGrade() {
		std::cout << grade << std::endl;
	}

	void Student::SetName(const char* newName) {
		strcpy(this->name, newName);
	}

	void Student::GetName() {
		std::cout << this->name << std::endl;
	}

	Student& Student::GetThisStudent() {
		return *this;
	}
