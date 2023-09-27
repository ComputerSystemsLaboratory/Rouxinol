#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{	
	int a,b,c,d,i;

	i = 0;

	cin >> a >> b >> c;


	while (1)
	{
		if (a==b+1)
		{
			break;
		}

		d = c%a;

		if (d == 0)
		{
			i++;
		}

		a++;
	}


	cout << i << endl;


	return 0;
}