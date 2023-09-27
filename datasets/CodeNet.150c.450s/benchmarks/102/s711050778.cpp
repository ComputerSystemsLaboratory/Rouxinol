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

int w, h, cnt;
void srch(int x, int y, vector<vector<char>> &inp, vector < vector <bool>> &hit)
{
	if (x < 0 || w <= x || y < 0 || h <= y || inp[x][y] == '#') { return; }
	if (hit[x][y]) return;
	hit[x][y] = true;
	cnt += 1;
	srch(x + 1, y, inp, hit);
	srch(x - 1, y, inp, hit);
	srch(x, y + 1, inp, hit);
	srch(x, y - 1, inp, hit);
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (1)
	{
		cin >> w >> h;
		if (w == 0 && h == 0) { break; }
		cnt = 0;
		vector<vector<char>> inp(w, vector<char>(h, 0));
		vector<vector<bool>> hit(w, vector<bool>(h, false));
		int x = 0, y = 0;
		rep(i, h)
		{
			rep(j, w)
			{
				cin >> inp[j][i];
				if (inp[j][i] == '@'){ x = j; y = i; }
			}
		}
		srch(x, y, inp, hit);
		printf("%d\n", cnt);
	}
	return 0;
}