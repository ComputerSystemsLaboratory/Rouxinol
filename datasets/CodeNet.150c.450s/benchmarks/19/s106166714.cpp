#include<iostream>
#include<stdio.h>
using namespace std;
int main() {


	int x, y;
	for (int i = 0; i < 3000; i++) 
	{
		cin >> x >> y;
		if (x == 0 && y == 0)
		{
			break;
		}
		if (x > y)
		{
			int a = x;
			x = y;
			y = a;
		}
		cout << x << " " <<  y << endl;
	}
	return 0;
}
