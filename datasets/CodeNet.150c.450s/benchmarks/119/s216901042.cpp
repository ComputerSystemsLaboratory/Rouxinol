#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <functional>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vec;
typedef pair<int, int> P;
#define rep(n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define out(a) cout << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
#define INF 100000000

int w, h;
int f[55][55] = { 0 };

void dfs(int y, int x) {
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			int ny = y + i;
			int nx = x + j;
			if (0 <= ny&&ny < h && 0 <= nx&&nx < w&&f[ny][nx] == 1) {
				f[ny][nx] = 0;
				dfs(ny, nx);
			}
		}
	}
	return;
}

int main() {
	while (true) {
		cin >> w >> h;
		if (w == 0 && h == 0) return 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> f[i][j];
			}
		}
		int res = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (f[i][j] == 1) {
					f[i][j] = 0;
					res++;
					dfs(i, j);
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}

