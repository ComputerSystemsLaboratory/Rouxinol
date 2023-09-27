#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <functional>
#include <utility>
using namespace std;
#define MOD 1000000007
#define ADD(X,Y) ((X) = ((X) + (Y)%MOD) % MOD)
typedef long long i64; typedef vector<int> ivec; typedef vector<string> svec; typedef pair<int, int> pi;
int dd[] = { 0, 1, 0, -1, 0 };


int main()
{
	while (true)
	{
		int W, H;
		cin >> W >> H;
		if (W == 0 && H == 0) break;

		char C[30][30];
		int B[30][30];

		int sx = -1; int sy = -1;
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				cin >> C[i][j];
				B[i][j] = 0;
				if (C[i][j] == '@')
				{
					sy = i;
					sx = j;
				}
			}
		}

		queue<pi> Q;
		Q.push(pi(sy, sx));
		B[sy][sx] = 1;
		int ans = 1;
		while (!Q.empty())
		{
			int ty = Q.front().first; int tx = Q.front().second;
			Q.pop();

			for (int r = 0; r < 4; r++)
			{
				int y = ty + dd[r];
				int x = tx + dd[r + 1];
				if (y < 0 || y >= H || x < 0 || x >= W)continue;
				if (C[y][x] == '#')continue;
				if (B[y][x])continue;
				ans++;
				B[y][x] = 1;
				Q.push(pi(y, x));
			}
		}

		cout << ans << endl;
	}
	return 0;
}