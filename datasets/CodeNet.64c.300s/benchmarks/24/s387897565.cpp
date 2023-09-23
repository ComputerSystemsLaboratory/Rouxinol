#include <iostream>
#include <stdio.h>
#include <string.h>
#include <functional>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <valarray>
#include <algorithm>
#include <time.h>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main (void)
{
	long n,a[10000],b[10000],A,B;

	for (int i = 0; i < 10000; i++)
	{
		cin >> n;

		if (n == 0)
		{
			break;
		}

		for ( int j = 0; j < n; j++)
		{
			cin >> a[j] >> b[j];

			if (a[j] > b[j])
			{
				A += a[j] + b[j];
			}
			else if (a[j] < b[j])
			{
				B += a[j] + b[j];
			}
			else
			{
				A += a[j];
				B += b[j];
			}

		}
		cout << A << " " << B << endl;

		A = B = 0;
	}
}