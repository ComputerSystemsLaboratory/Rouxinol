#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
struct edge { int u, v; ll w; };

ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

bool hoge(vector<string>& s) {
	int H = s.size(), W = s[0].size();
	bool flag = false;
	for (int y = 0; y < H; y++)
		for (int x = 0; x < W; x++)
			if (s[y][x] == '.')
				for (int k = 0; k < 4; k++) {
					int _x = x + dx[k], _y = y + dy[k];
					if (_x >= 0 && _y >= 0 && _x < W && _y < H && s[_y][_x] == '@') {
						s[y][x] = '@';
						flag = true;
					}
				}
	return flag;
}

int main() {
	for (;;) {
		int W, H; cin >> W >> H;
		if (W == 0 && H == 0) break;
		vector<string> s(H);
		for (int i = 0; i < H; i++) cin >> s[i];
		while (hoge(s));
		int cnt = 0;
		for (int y = 0; y < H; y++)
			for (int x = 0; x < W; x++)
				if (s[y][x] == '@') cnt++;
		cout << cnt << endl;
	}
}