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

	vector<int> dat(10, 0);
	rep(i, 10) { cin >> dat[i]; }
	sort(all(dat));
	rep(i, 3) { printf("%d\n", dat[9 - i]); }

	return 0;
}