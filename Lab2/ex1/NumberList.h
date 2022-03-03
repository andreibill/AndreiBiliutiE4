#pragma once

class NumberList {
	int numbers[10];
	int count;
	static int pos; //pozitia in vector
public:
	void Init();
	bool Add(int x);

	void Sort();
	void Print();
};
