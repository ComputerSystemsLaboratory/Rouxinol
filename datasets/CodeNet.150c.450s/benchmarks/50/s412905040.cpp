#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cost;

	while(cin >> cost)
	{
		if (cost == 0) break;

		int change, changenum;
		change = 1000 - cost;
		changenum = 0;

		if (change > 500)
		{
			change -= 500;
			changenum += 1;
		}

		for (int i = 0; change >= 100; i++)
		{
			change -= 100;
			changenum += 1;
		}

		for (int i = 0; change >= 50; i++)
		{
			change -= 50;
			changenum += 1;
		}

		for (int i = 0; change >= 10; i++)
		{
			change -= 10;
			changenum += 1;
		}
		
		for (int i = 0; change >= 5; i++)
		{
			change -= 5;
			changenum += 1;
		}

		changenum += change;

		cout << changenum << endl;
	}

	return 0;
}