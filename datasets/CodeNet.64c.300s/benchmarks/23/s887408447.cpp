#include <cstdio>
#include <iostream>
using namespace std;

int Area(int, int);
int Perimeter(int, int);


int main()
{
	int a, b;
	cin >> a >> b;
	
	printf("%d %d\n", Area(a, b), Perimeter(a, b));

	return 0;
}


int Area(int a, int b)
{
	return  a * b;
}

int Perimeter(int a, int b)
{
	return 2 * (a + b);
}