#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<string.h>

typedef long long int ll;
using namespace std;

int main(void)
{
	while (1)
	{
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0)
		{
			break;
		}
		
		if (x < y)
		{
			cout << x << ' ' << y << endl;
		}
		else
		{
			cout << y << ' ' << x << endl;
		}
	}
	return 0;
}
