#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void solve()
{
	int a, b;
	char c;
	while (cin >> a >> c >> b)
	{
		if (c == '?')
		{
			return;
		}
		else if (c == '+')
		{
			cout << a + b << endl;
		}
		else if (c == '-')
		{
			cout << a - b << endl;
		}
		else if (c == '*')
		{
			cout << a * b << endl;
		}
		else if (c == '/')
		{
			cout << a / b << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}