#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

using namespace std;

void solve()
{
	int n, x;
	while (cin >> n >> x, n || x)
	{
		int ans = 0;
		for (int i = 1; i <= n - 2; ++i)
		{
			for (int j = i + 1; j <= n - 1; ++j)
			{
				if (x - i - j <= n && x - i - j > j)
				{
					++ans;
				}
				//for (int k = j + 1; k <= n; ++k)
				//{
				//	if (i + j + k == x)
				//	{
				//		++ans;
				//	}
				//}
			}
		}
		cout << ans << endl;
	}
}

int main()
{
	solve();
	return(0);
}