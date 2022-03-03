#include <iostream>
class NumberList {
	int numbers[10];
	int count;
	int pos=0; //pozitia in vector
public:
	void Init();
	bool Add(int x);

	void Sort();
	void Print();
};
