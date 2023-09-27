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
	long n,q[10000];

	cin >> n;

	for (long i = 1; i < n + 1; i++)
	{
		if (i % 3 == 0)
		{
			cout << " " << i;
			q[i] = -1;
		}
		else if (i % 10 == 3)
		{
			cout << " " << i;
			q[i] = -1;
		}

		ostringstream p;
		p << i;
		string pp;
		pp = p.str();
		int k = 0;
		k = pp.size();
		for (int j = 0; j < k; j++)
		{
			if (pp.substr(j,1) == "3" && q[i] != -1)
			{
				cout << " " << i;
				break;
			}
		}
	}
	cout << endl;
}

