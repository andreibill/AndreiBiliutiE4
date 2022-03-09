#pragma once
class Student {
private:
	char name[30];
	float mathG;
	float englishG;
	float historyG;
	float average;
public:
	void setName(char name[]);
	char* getName();
	void setMathG(float mathG);
	float getMathG();
	void setEnglishG(float englishG);
	float getEnglishG();
	void setHistoryG(float historyG);
	float getHistoryG();
	float averageG();
};
