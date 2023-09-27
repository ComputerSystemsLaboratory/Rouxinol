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
	int n,m,a[31],b[31];

	cin >> n >> m;

	char o;

	for (int i = 0; i < m; i++)
	{
		cin >> a[i] >> o >> b[i];
	}

	int p[31];

	for (int j = 1; j < n + 1; j++)
	{
		p[j] = j;
	}

	for (int i = 0; i < m; i++)
	{
		int ha = 0,hb = 0;

		ha = p[b[i]];
		hb = p[a[i]];

		p[a[i]] = 0;
		p[a[i]] = ha;

		p[b[i]] = 0;
		p[b[i]] = hb;
	}

	for (int j = 1; j < n + 1; j++)
	{
		cout << p[j] << endl;
	}
}
