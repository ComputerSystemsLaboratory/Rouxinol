#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{	
	int a, b, c, d;

	cin >> a >> b >> c;

	if (a>=b)
	{
		d = a;
		a = b;
		b = d;

	}
	
	if (c<=a)
	{
		cout << c << " "  << a << " " << b << endl;
		return 0;
	}

	if (b <= c)
	{
		cout << a << " " << b << " " << c << endl;
		return 0;
	}
	
	if (a <= c && c <= b)
	{
		cout << a << " " << c  << " " << b << endl;
		return 0;
	}
	
	return 0;
}