#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	int a[30], n,year;
	cin >> n;
	
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;

	while (1)
	{
		if (n==0)
		{
			break;
		}
			for (int  i = 4; i < n+1; i++)
		{
				a[i] = a[i - 1] + a[i - 2] + a[i - 3];

		}
			if (a[n]%3650==0)
			{
				year = a[n] / 3650;
			}
			else
			{
				year = a[n] / 3650 + 1;
			}
			
		cout <<year<<endl;
		cin >> n;
	}
}