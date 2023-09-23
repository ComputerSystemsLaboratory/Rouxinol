#include<iostream>
using namespace std;
int main()
{
	while (true)
	{		
		int a;
		int i = 0;
		cin >> a;
		if (a == 0)break;
		int b = 1000 - a;
		while (b >= 500)
		{
			b = b - 500;
			i = i + 1;
		}
		while (b >= 100)
		{
			b = b - 100;
			i = i + 1;
		}
		while (b >= 50)
		{
			b = b - 50;
			i = i + 1;
		}
		while (b >= 10)
		{
			b = b - 10;
			i = i + 1;
		}
		while (b >= 5)
		{
			b = b - 5;
			i = i + 1;
		}
		while (b >= 1)
		{
			b = b - 1;
			i = i + 1;
		}
		cout << i << endl;
	}
	return 0;
}