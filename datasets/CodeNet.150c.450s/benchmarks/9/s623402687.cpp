#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string charcters;

	int m;

	int h;

	while (1)
	{
		cin >> charcters;

		if (charcters == "-")break;

		cin >> m;

		for (int i = 0; i < m; i++)
		{
			cin >> h;

			string Char = charcters.substr(0, h);

			charcters += Char;

			charcters.erase(charcters.begin(), charcters.begin() + h);

		}

		cout << charcters << endl;

	}

	return 0;
}