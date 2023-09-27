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
#define na printf("a");
#define nnn(i) printf("%d", i);
#define mod 1000000007

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (1)
	{
		int n = 0, r = 0; cin >> n >> r;
		if (n == 0 && r == 0) { return 0; }
		int p = 0, c = 0;
		vector<int> bef(n + 5);
		vector<int> aft(n + 5);
		rep(i, n) 
		{
			bef[i] = n - i;
			aft[i] = n - i;
		}
		rep(i, r)
		{
			cin >> p >> c;
			rep(j, p - 1){	aft[c + j] = bef[j];	}
			rep(j, c)	{	aft[j] = bef[p - 1 + j];	}
			bef = aft;
		}
		printf("%d\n", bef[0]);
	}
	return 0;
}