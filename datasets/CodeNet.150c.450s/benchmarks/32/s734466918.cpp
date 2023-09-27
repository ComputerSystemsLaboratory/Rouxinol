#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <functional>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main (void)
{
	long m,min,max,p[10000],g[10000],kkk,rrr;

	for (long o = 0; o < 10000; o++)
	{
	cin >> m >> min >> max;

	if (m == 0 && min == 0)
	{
		if (max == 0)
		{
			break;
		}
	}

	kkk = 0;

	for (long i = 1; i < m + 1; i++)
	{
		cin >> p[i];
	}

	for (long j = min; j < max + 1; j++)
	{
		g[j] = p[j] - p[j + 1];

		if (kkk <= g[j])
		{
			kkk = 0;
			kkk = g[j];
			rrr = 0;
			rrr = j;
		}
	}

		cout << rrr << endl;
	}
}