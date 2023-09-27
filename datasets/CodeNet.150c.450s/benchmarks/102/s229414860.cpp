#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

#define MAX 20
#define NIL -1

static char M[MAX][MAX];
static int color[MAX][MAX];
int W, H;
int cnt;

void dfs(int h, int w) {
	cnt++;
	color[h][w] = 0;
	if (h != H - 1 && M[h + 1][w] == '.'&&color[h + 1][w] == NIL)
		dfs(h + 1, w);
	if (h != 0 && M[h - 1][w] == '.'&&color[h - 1][w] == NIL)
		dfs(h - 1, w);
	if (w != W - 1 && M[h][w + 1] == '.'&&color[h][w + 1] == NIL)
		dfs(h, w + 1);
	if (w != 0 && M[h][w - 1] == '.'&&color[h][w - 1] == NIL)
		dfs(h, w - 1);
}

struct { int x; int y; } s;

int main() {
	while (cin >> W >> H&&H&&W) {
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) {
				cin >> M[h][w];
				if (M[h][w] == '@')s.x = w, s.y = h;
			}
		}
		fill(color[0], color[MAX], NIL);
		cnt = 0;
		dfs(s.y, s.x);
		cout << cnt << endl;
	}
	return 0;
}