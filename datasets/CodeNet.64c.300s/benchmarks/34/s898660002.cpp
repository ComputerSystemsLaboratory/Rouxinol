#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>
#include <cmath>
#include <cstring>
#include <sstream>
#include <stdlib.h>
#include <iomanip>
//#include <vector>

using namespace std;

int main (void)
{
	int n,a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i < n; i++)
	{
		int o = 0;
		o = a[i];
		for (int k = 0; k < n - 1; k++)
		{
			cout << a[k] << " "; // 出力
		}
		cout << a[n - 1] << endl;

		for (int j = i - 1; j >= 0; j--)
		{
			if (a[j] <= o)
			{
				break;
			}
			else
			{
				int p = 0,q = 0;
				p = a[j];
				q = a[j + 1];
				a[j + 1] = 0;
				a[j] = 0;
				a[j + 1] = p;
				a[j] = q;
			}
		}
	}

	for (int k = 0; k < n - 1; k++)
	{
		cout << a[k] << " ";
	}
	cout << a[n - 1] << endl;
}




