#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <set>
#include <utility>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <numeric>
#include <sstream>
#include <list>
#include <map>
#include <functional>
#include <iterator>

#define rep(i,p,n) for(int i=(int)p;i<(int)n;i++)
#define repp(i,p,n) for(int i=(int)p;i>=(int)n;i--)
#define Sort(x) sort(x.begin(),x.end())
#define PSort(x) sort(begin(x), end(x), pairCompare)
#define ll long long
#define INF 2000000000
#define pb push_back
#define mp make_pair
#define PI 3.14159265358979
int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
using namespace std;

int w, h;

vector<vector<char>> v;
int ans = 0;

void dfs(int y,int x) {
	if (v[y][x] == '.') {
		v[y][x] = '#';
		ans++;
	}

	rep(i, 0, 4) {
		int nx = x + dx[i], ny = y + dy[i];
		if (0 <= nx && 0 <= ny&&nx < w&&ny < h&&v[ny][nx] == '.')dfs(ny, nx);
	}
}

int main(){
	while (1) {
		int sx, sy;
		cin >> w >> h;
		if (w == 0 && h == 0)break;
		v.resize(h, vector<char>(w));
		rep(i, 0, h) {
			rep(j, 0, w) {
				cin >> v[i][j];
				if (v[i][j] == '@') {
					sx = j;
					sy = i;
					v[i][j] = '.';
				}
			}
		}

		dfs(sy, sx);
		cout << ans << endl;

		v.clear();
		ans = 0;
	}


	

	return 0;
}