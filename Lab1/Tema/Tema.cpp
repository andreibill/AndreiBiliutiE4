#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("in.txt");

int main()
{
    int n;
    int sum = 0;
    while (fin >> n)
        sum += n;
    printf("%d", sum);
}
