#include <iostream>
#include <stdio.h>
#include <string.h>
#include <functional>
#include <algorithm>
#include <string>

using namespace std;

int main (void)
{
	string T,H;
	int n,tt = 0,hh = 0;
	cin >> n;


	for (int a = 0; a < n; a++)
	{
		cin >> T >> H;

		if (T == H)
		{
			tt += 1;
			hh += 1;
		}

		else if (T > H)
		{
			tt += 3;
		}
		else if (T < H)
		{
			hh += 3;
		}
	}

	cout << tt << " " << hh << endl;
}