#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		int x,y;
		x = i;
		y = a[i];
		for (int I = i+1; I < 5; I++)
		{
			if (a[I] > y)
			{
				y = a[I];
				x = I;
			}
		}
		int s=a[i];
		a[i] = a[x];
		a[x] = s;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
		if (i != 4)cout << " ";
	}
	cout << endl;
}