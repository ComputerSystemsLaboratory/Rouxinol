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

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long
#define bl bool
#define nn printf("\n");
#define mod 1000000007

using namespace std;

int w, h, cnt = 0;

void srch(int x, int y, vector<vector<int>> &inp, vector < vector <bool>> &hit)
{
	if (x < 0 || w <= x || y < 0 || h <= y || inp[y][x] == 0) { return; }
	if (hit[y][x]) return;
	hit[y][x] = true;
	cnt += 1;
	srch(x + 1, y, inp, hit);
	srch(x - 1, y, inp, hit);
	srch(x, y + 1, inp, hit);
	srch(x, y - 1, inp, hit);
	srch(x + 1, y + 1, inp, hit);
	srch(x + 1, y - 1, inp, hit);
	srch(x - 1, y + 1, inp, hit);
	srch(x - 1, y - 1, inp, hit);
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (cin >> w >> h && w != 0 && h != 0)
	{
		vector<vector<int>> inp(h, vector<int>(w, 0));
		vector<vector<bool>> hit(h, vector<bool>(w, false));
		int ans = 0;
		rep(y, h) rep(x, w){ cin >> inp[y][x]; }
		rep(y, h) rep(x, w)
		{
			srch(x, y, inp, hit);
			if (cnt > 0) { ans += 1; }
			cnt = 0;
		}
		printf("%d\n", ans);
	}

	return 0;
}