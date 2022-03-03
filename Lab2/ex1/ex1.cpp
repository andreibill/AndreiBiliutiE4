#include <iostream>
#include "NumberList.h"


int main()
{
	NumberList a;
	a.Init();
	for(int i =0;i<=6;i++)
		a.Add(i);

	a.Add(3);
	a.Sort();
	a.Print();
}
