#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>

//#include <map>

using namespace std;

int main()
{
	while (1)
	{
		int n, x;
		cin >> n >> x;
		if (n == 0 && x == 0)break;

		int count = 0;

		for (int i = 1; i <= n; i++)
		{
			if (i + (i + 1) + ( i + 2 ) > x)break;
			for (int j = i + 1; j <= n; j++)
			{
				if (i + j + (j + 1) > x)break;
				for (int k = j + 1; k <= n; k++)
				{
					if ((i + j + k) == x)
					{
						count++;
						break;
					}
				}
			}
		}
		cout << count << endl;
	}

	return 0;
}