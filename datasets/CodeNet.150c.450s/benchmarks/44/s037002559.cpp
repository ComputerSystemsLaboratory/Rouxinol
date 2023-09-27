#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#include <set>
#include <map>
//#include <bits/stdc++.h>

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
	vector<int> a(4, 0), b(4, 0);

	while (cin >> a[0] >> a[1] >> a[2] >> a[3])
	{
		int hit = 0, blow = 0;
		rep(i, 4) { cin >> b[i]; }
		rep(i, 4)
		{
			if (a[i] == b[i]) { hit += 1; }
		}
		rep(i, 4)
		{
			blow += count(all(b), a[i]);
		}
		printf("%d %d\n", hit, blow - hit);
	}
	return 0;
}