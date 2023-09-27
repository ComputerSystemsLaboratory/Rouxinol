#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits>
#include <sstream>

using namespace std;

int main (void)
{
	long long a,b,c;

	long co = 0;

	cin >> a >> b >> c;

	for (long long i = a; i < b + 1; i++)
	{
		for (long long j = 0; j < 30000; j++)
		{
			if (i * j == c)
			{
				co += 1;
			}
		}
	}

	cout << co << endl;
}


