#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
#include <functional>
using namespace std;

//??°?????????????????°

void function()
{
	//??¢??°
}

int main()
{
	int r, c;
	int a[101][101];
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		a[i][c] = 0;
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
			a[i][c] += a[i][j];
		}
	}

	for (int i = 0; i < c + 1; i++)
	{
		a[r][i] = 0;
		for (int j = 0; j < r; j++)
		{
			a[r][i] += a[j][i];
		}
	}

	for (int i = 0; i < r + 1; i++)
	{
		for (int j = 0; j < c + 1; j++)
		{
			cout << a[i][j];

			if (j == c)
			{
				cout << endl;
			}
			else
			{
				cout << " ";
			}
		}
	}
	return 0;
}