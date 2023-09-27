#include<iostream>
#define MAX 600
using namespace std;

int d, area, sum;

int f(int x)
{
	return x*x;
}

int main()
{
	while (cin >> d)
	{
		sum = 0;
		for (int i = 0; i < MAX / d; i++)
		{
			area = d*(f(i*d));
			sum += area;
		}
		cout << sum << endl;
	}
	return 0;
}