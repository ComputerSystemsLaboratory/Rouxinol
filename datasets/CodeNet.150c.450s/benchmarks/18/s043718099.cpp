#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	unsigned int n;
	
	cin >> n;
	
	double a = 100000;
	for (int i = 0; i < n; i++)
	{
		a *= 1.05;
		a /= 1000;
		a = ceil(a);
		a *= 1000;
	}
	cout << (int)a << endl;
	
	return 0;
}