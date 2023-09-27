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
	int n, x;
	while (cin >> n >> x)
	{
		if (n == 0 && x == 0)
		{
			return 0;
		}

		int cnt = 0;
		for (int i = 1; i <= n - 2; i++)
		{
			for (int j = i + 1; j <= n - 1; j++)
			{
				for (int k = j + 1; k <= n; k++)
				{
					if (i + j + k == x)
					{
						cnt++;
					}
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}