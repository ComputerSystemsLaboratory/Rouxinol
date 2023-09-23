#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	while (true)
	{
		if (a > b)
		{
			swap(a, b);
		}

		if (b % a == 0) break;

		b = b % a;
	}

	cout << a << endl;

	return 0;
}