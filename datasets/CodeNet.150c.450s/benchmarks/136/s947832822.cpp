#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;

	while(cin >> a >> b)
	{
		int l;
	    int g = 1;

		for (int i = 2; a > i && b > i; i++)
		{
			for (int j = 0; a % i == 0 && b % i == 0; j++)
			{
				a = a / i;
				b = b / i;
				g *= i;
			}
		}

		l = g * a * b;
		cout << g << " " << l << endl;
	}

	return 0;
}