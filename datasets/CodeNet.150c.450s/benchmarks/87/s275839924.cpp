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

void move(vector<vector<int>> &stn, int num)
{
	rep(i, num)
	{
		rep(j, 5)
		{
			if (stn[i][j] == 0)
			{
				stn[i][j] = stn[i + 1][j];
				stn[i + 1][j] = 0;
			}
		}
	}
}
int check(vector<vector<int>> &stn, int num)
{
	int poi = 0;
	rep(i, num)
	{
		int tmp = 0;
		rep(j, 3)
		{
			if (stn[i][j] == stn[i][j + 1] && stn[i][j + 1] == stn[i][j + 2])
			{
				tmp += stn[i][j] * 3;
				if (j < 2 && stn[i][j + 2] == stn[i][j + 3])
				{
					if (j == 0 && stn[i][j + 3] == stn[i][j + 4])
					{
						tmp += stn[i][j + 4];
						stn[i][j + 4] = 0;
					}
					tmp += stn[i][j + 3];
					stn[i][j + 3] = 0;
				}
				stn[i][j] = 0, stn[i][j + 1] = 0,	stn[i][j + 2] = 0;
			}
		}
		poi += tmp;
	}
	return poi;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int num = 0;
	while (cin >> num && num != 0)
	{
		vector< vector<int> > stn(num + 1, vector<int>(5));
		rep(i, num) { cin >> stn[num - i - 1][0] >> stn[num - i - 1][1] >> stn[num - i - 1][2] >> stn[num - i - 1][3] >> stn[num - i - 1][4]; }
		int ans = 0, tmp = 0;
		rep(i, 10)
		{
			ans += check(stn, num);
			rep(i, 10) { move(stn, num); }
		}
		printf("%d\n", ans);
	}
	return 0;
}