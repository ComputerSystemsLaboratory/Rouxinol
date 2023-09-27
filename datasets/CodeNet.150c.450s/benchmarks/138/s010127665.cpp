#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	while (a != 0 && b != 0)
	{
		if (a >= b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	if (a >= b)
	{
		cout << a << endl;
	}
	else
	{
		cout << b << endl;
	}
}
