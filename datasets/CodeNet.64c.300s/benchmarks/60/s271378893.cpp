#include <bits/stdc++.h>
using namespace std;

int h, w;
int n;
bool ng[16][16];
int dp[16][16];

int search(int x, int y)
{
	if (x > h - 1 || y > w - 1) return 0;
	if (ng[x][y]) return 0;
	if (x == h - 1 && y == w - 1) return 1;
	if (~dp[x][y]) return dp[x][y];
	return dp[x][y] = search(x + 1, y) + search(x, y + 1);
}

int main()
{
	while (scanf("%d %d", &h, &w), h){
		memset(ng, 0, sizeof(ng));
		memset(dp, -1, sizeof(dp));
		
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			ng[--x][--y] = true;
		}
		
		printf("%d\n", search(0, 0));
	}
}