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
	int n, m;
	int a[100][100];
	int b[100];

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < n; i++)
	{
		int ans = 0;
		for (int j = 0; j < m; j++)
		{
			ans += a[i][j] * b[j];
		}
		cout << ans << endl;
	}
	return 0;
}