#include "Student.h"
#include <string.h>
void Student::setName(char name[]) {
	strcpy_s(this->name, name);
}
char* Student::getName() {
	return this->name;
}
void Student::setMathG(float mathG) {
	this->mathG = mathG;
}
float Student::getMathG() {
	return this->mathG;
}
void Student::setEnglishG(float englishG) {
	this->englishG = englishG;
}
float Student::getEnglishG() {
	return this->englishG;
}
void Student::setHistoryG(float historyG) {
	this->historyG = historyG;
}
float Student::getHistoryG() {
	return this->mathG;
}
float Student::averageG() {
	return (this->mathG + this->englishG + this->historyG) / 3;
}