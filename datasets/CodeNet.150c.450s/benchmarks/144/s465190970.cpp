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
#include <iomanip>
using namespace std;

//??°?????????????????°

void function()
{
	//??¢??°
}

int main()
{
	int n, m, l;
	int a[101][101];
	int b[101][101];
	cin >> n >> m >> l;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			long long int sum = 0;
			for (int k = 0; k < m; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			cout << sum;

			if (j != l - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}