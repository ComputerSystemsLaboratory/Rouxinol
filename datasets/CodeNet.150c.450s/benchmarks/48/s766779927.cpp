#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <cstdio>
#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
using namespace std;
int main()
{
	int e; while (cin >> e , e)
	{
		int m = 214214, x = 0;
		rep(z, 101) rep(y, 1001)
		{
			x = e - (y * y + z * z * z);
			if (e == x + (y * y) + (z * z * z) && x >= 0 ) 
			{ m = min(x + y + z, m); }
		}
		printf("%d\n", m);
	}
	return 0;
}