#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int min(int a, int b)
{
	return a < b ? a : b;
}

int GCD(int a, int b)
{
	if (a == b)
	{
		return a;
	}
	else
	{
		return GCD(max(a, b) - min(a, b), min(a, b));
	}
}

int LCM(int a, int b)
{
	return a / GCD(a, b) * b;
}

int main()
{
	int a, b;

	while (cin >> a >> b)
	{
		cout << GCD(a, b) << ' ' << LCM(a, b) << endl;
	}

	return 0;
}