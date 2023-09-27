#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;
#define REP(i,n) for(int i = 0; i < (int)n; i++)
#define FOR(i,a,b) for(int i = a; i < (int)b; i++)
const int INF = 1<<28;

int m[50][50];
int w, h;
int cnt;

void dfs(int x, int y, int z) {
	if(m[y][x]) {
		if(!z)
			cnt++;
		m[y][x] = false;
		if(y > 0 && m[y-1][x])
			dfs(x, y-1, 1);
		if(y > 0 && x > 0 && m[y-1][x-1])
			dfs(x-1, y-1, 1);
		if(x > 0 && m[y][x-1])
			dfs(x-1, y, 1);
		if(x > 0 && y < h-1 && m[y+1][x-1])
			dfs(x-1, y+1, 1);
		if(x < w-1 && m[y][x+1])
			dfs(x+1, y, 1);
		if(x < w-1 && 0 < y && m[y-1][x+1])
			dfs(x+1, y-1, 1);
		if(y < h-1 && m[y+1][x])
			dfs(x, y+1, 1);
		if(y < h-1 && x < w-1 && m[y+1][x+1])
			dfs(x+1, y+1, 1);
	}
	return;
}

int main() {
	while(cin >> w >> h, w|h) {
		REP(i, h) REP(j, w)
			cin >> m[i][j];

		cnt = 0;
		REP(i, h) REP(j, w)
			dfs(j, i, 0);

		cout << cnt << endl;
	}
	return 0;
}