#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	int a, b, c500, c100, c50, c10, c5, c1, sum = 0;
	cin >> a;

	while (1)
	{
		if (a == 0)
		{
			break;
		}

		b = 1000 - a;
		c500 = b / 500;
		b = b % 500;
		c100 = b / 100;
		b = b % 100;
		c50 = b / 50;
		b = b % 50;
		c10 = b / 10;
		b = b % 10;
		c5 = b / 5;
		b = b % 5;
		c1 = b / 1;

		sum = c500 + c100 + c50 + c10 + c5 + c1;
		cout << sum<<endl;
		cin >> a;
	}
}