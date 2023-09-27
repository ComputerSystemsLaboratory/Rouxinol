#include <iostream>
#include <cstdio>
using namespace std;

double fx (double d, double x) 
{
	if (x == 0) return 0;
	else return d * x * x + fx(d, x - d);
}

int main(void)
{
	double d, x;
	while (cin >> d) {
		x = 600;
		printf("%.0f\n", fx(d, x - d));
	}
	
	return 0;
}