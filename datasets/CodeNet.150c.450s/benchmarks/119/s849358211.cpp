#include <bits/stdc++.h>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;

int c[50][50] = {};

void dfs(int x, int y, int h, int w) {
	if (c[y][x] == 0) {
		return;
	}
	c[y][x] = 0;
	if (x + 1 <= w - 1) {
		dfs(x + 1, y, h, w);
	}
	if (x - 1 >= 0) {
		dfs(x - 1, y, h, w);
	}
	if (y + 1 <= h - 1) {
		dfs(x, y + 1, h, w);
	}
	if (y - 1 >= 0) {
		dfs(x,y - 1, h, w);
	}
	if (x + 1 <= w - 1 && y + 1 <= h - 1) {
		dfs(x + 1, y + 1, h, w);
	}
	if (x + 1 <= w - 1 && y - 1 >= 0) {
		dfs(x + 1, y - 1, h, w);
	}
	if (x - 1 >= 0 && y + 1 <= h - 1) {
		dfs(x - 1, y + 1, h, w);
	}
	if (x - 1 >= 0 && y - 1 >= 0) {
		dfs(x - 1, y - 1, h, w);
	}
	return;
}

int main(void) {
	
	while (1) {
		int h, w;
		int count = 0;

		cin >> w >> h;
		if (h == 0) {
			break;
		}
		

		FOR(i, 0, h - 1) {
			FOR(t, 0, w - 1) {
				cin >> c[i][t];
			}
		}
		FOR(i, 0, h - 1) {
			FOR(t, 0, w - 1) {
				if (c[i][t] == 0) {
					continue;
				}
				
				dfs(t, i, h, w);
				count++;
			}
		}
		cout << count << endl;
	}

}
