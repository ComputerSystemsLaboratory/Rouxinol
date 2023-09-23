#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	int gcd;
	while (a > 0 && b > 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	if (a > 0)
	{
		gcd = a;
	}
	else
	{
		gcd = b;
	}
	return gcd;
}

int LCM(int a, int b)
{
	int init_a = a;
	int init_b = b;
	while (1)
	{
		while (a > b)
		{
			b += init_b;
		}
		if (a == b) break;
		a += init_a;
	}
	return a;
}

int main()
{
	int a, b;
	while (cin >> a >> b, !cin.eof())
	{
		cout <<	GCD(a, b) << " " << LCM(a, b) << endl;
	}
	return 0;
}
