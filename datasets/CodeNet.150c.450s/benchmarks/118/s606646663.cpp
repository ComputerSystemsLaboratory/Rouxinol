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

	int num; cin >> num;
	rep(i, num)
	{
		int ans = 0;
		int Y = 0, M = 0, D = 0; cin >> Y >> M >> D;
		if (Y % 3 == 0) { ans += 20 - D + (10 - M) * 20; }
		else
		{
			if (M % 2 == 0){ ans += 19 - D + ((10 - M) / 2) * 20 + ((10 - M) /2) * 19; }
			else{ ans += 20 - D + ((9 - M) / 2) * 20 + ((11 - M) / 2) * 19; }
		}
		Y++;
		while (Y != 1000)
		{
			if (Y % 3 == 0) { ans += 200; }
			else { ans += 195; }
			Y += 1;
		}
		printf("%d\n", ans + 1);
	}
	
	

	return 0;
}