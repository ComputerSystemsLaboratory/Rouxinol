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

#define MAX 100
#define NIL -1

static char M[MAX][MAX];
static int color[MAX][MAX];
int W, H;

//int dh[4] = { 0,1,0,-1 };
//int dw[4] = { 1,0,-1,0 };

void dfs(int h, int w, int c, char k) {
	color[h][w] = c;
	//for (int i = 0; i < 4; i++) {
	//	int _h = h + dh[i],
	//		_w = w + dw[i];
	//	if (_h < H - 1 && _h > 0 && _w < W - 1 && _w > 0) {
	//		if (M[_h][_w] == k&&color[_h][_w] == NIL)
	//			dfs(_h, _w, c, k);
	//	}
	//}
	if (h != H - 1 && M[h + 1][w] == k&&color[h + 1][w] == NIL)
		dfs(h + 1, w, c, k);
	if (h != 0 && M[h - 1][w] == k&&color[h - 1][w] == NIL)
		dfs(h - 1, w, c, k);
	if (w != W - 1 && M[h][w + 1] == k&&color[h][w + 1] == NIL)
		dfs(h, w + 1, c, k);
	if (w != 0 && M[h][w - 1] == k&&color[h][w - 1] == NIL)
		dfs(h, w - 1, c, k);
}

int main() {
	while (cin >> H >> W&&W&&H) {
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) {
				cin >> M[h][w];
			}
		}
		fill(color[0], color[MAX], NIL);
		int c = 0;
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) {
				if (color[h][w] == NIL) { dfs(h, w, c++, M[h][w]); }
			}
		}
		cout << c << endl;
	}
	return 0;
}