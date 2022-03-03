#include <iostream>
#include "NumberList.h"

void NumberList::Init(){
	count = 0;
}

bool NumberList::Add(int x){
	if (pos >= 10)
		return false;
	numbers[++pos] == x;
	return true;
}

void NumberList::Sort(){
	for (int i = 0; i < pos - 1; i++)
		for (int j = i + 1; j < pos; j++)
			if (numbers[i] > numbers[j])
				int c = numbers[i], numbers[i] = numbers[j], numbers[j] = c;
}
void NumberList::Print(){
	for (int i = 0; i < pos; i++)
		std::cout << numbers[i] << " ";
}