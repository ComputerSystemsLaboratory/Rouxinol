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

#define MAX 50
#define NIL -1

static char M[MAX][MAX];
static int color[MAX][MAX];
int W, H;

void dfs(int h, int w, int c) {
	color[h][w] = c;
	if (h != H - 1 && M[h + 1][w] == '1'&&color[h + 1][w] == NIL)
		dfs(h + 1, w, c);
	if (h != 0 && M[h - 1][w] == '1'&&color[h - 1][w] == NIL)
		dfs(h - 1, w, c);
	if (w != W - 1 && M[h][w + 1] == '1'&&color[h][w + 1] == NIL)
		dfs(h, w + 1, c);
	if (w != 0 && M[h][w - 1] == '1'&&color[h][w - 1] == NIL)
		dfs(h, w - 1, c);

	if (h != H - 1 && w != W - 1 && M[h + 1][w + 1] == '1'&&color[h + 1][w] == NIL)
		dfs(h + 1, w + 1, c);
	if (h != 0 && w != 0 && M[h - 1][w - 1] == '1'&&color[h - 1][w - 1] == NIL)
		dfs(h - 1, w - 1, c);
	if (h != 0 && w != W - 1 && M[h - 1][w + 1] == '1'&&color[h - 1][w + 1] == NIL)
		dfs(h - 1, w + 1, c);
	if (h != H - 1 && w != 0 && M[h + 1][w - 1] == '1'&&color[h + 1][w - 1] == NIL)
		dfs(h + 1, w - 1, c);
}


int main() {
	while (cin >> W >> H&&H&&W) {
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) {
				cin >> M[h][w];
			}
		}
		fill(color[0], color[MAX], NIL);
		int c = 0;
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) {
				if (color[h][w] == NIL&&M[h][w] == '1') { dfs(h, w, c++); }
			}
		}
		cout << c << endl;
	}
	return 0;
}