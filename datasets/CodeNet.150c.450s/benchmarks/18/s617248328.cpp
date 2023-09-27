#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main (void)
{
	int n;
	cin >> n;

	int p = 100000;

	for (int i = 0; i < n; i++)
	{
		p += p * 0.05;
		ostringstream w;
		string ww,x;
		w << p;
		ww = w.str();
		int y = 0;
		y = ww.size();
		x = ww.substr(y - 3,3);
		if (x != "000")
		{
			p = ((p / 1000) + 1) * 1000;
		}
		
	}
	cout << p << endl;
}

