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

vector<bool> era(1000010, true);
void makePrimeTable(int n)
{
	era[0] = false; era[1] = false;
	for (int i = 2; i <= n; i++)
	{
		if (era[i]) { for (int j = i * 2; j <= n; j += i) { era[j] = 0; } }
	}
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	makePrimeTable(1000000);
	while(1)
	{
		int a = 0, d = 0, n = 0; cin >> a >> d >> n;
		if (a == 0 && d == 0 && n == 0) { break; }
		int tmp = a, tmp1 = 0;
		while (1)
		{
			if (era[tmp])
			{
				tmp1 += 1;
				if (tmp1 == n) { printf("%d\n", tmp); break; }
			}
			tmp += d;
		}
	}
	return 0;
}