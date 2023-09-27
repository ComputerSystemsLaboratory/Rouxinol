#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long
#define bl bool
#define nn printf("\n");
#define mod 1000000007

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (1)
	{
		int n = 0, p = 0; cin >> n >> p;
		if (n == 0 && p == 0) { return 0; }
		vector<int> man(n, 0);
		int stn = p, win = -1;
		while (1)
		{
			rep(i, n)
			{
				if (stn > 0)
				{
					man[i] += 1;
					stn -= 1;
				}
				else if (stn == 0)
				{
					stn = man[i];
					man[i] = 0;
				}
				if (*max_element(all(man)) == p)
				{
					win = i;
					break;
				}
			}
			if (win >= 0) { break; }
		}
		printf("%d\n", win);
	}
}