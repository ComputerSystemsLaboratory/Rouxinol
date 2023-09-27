#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <string>
#include <ctype.h>

using namespace std;

void solve()
{
	string x;
	while (cin >> x)
	{
		if (x == "0")
		{
			break;
		}
		int ans = 0;
		for (int i = 0; i < x.size(); ++i)
		{
			ans += x[i] - '0';
		}
		cout << ans << endl;
	}
}

int main()
{
	solve();
	return(0);
}