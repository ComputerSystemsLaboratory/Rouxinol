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

vector<vector<int>> v;
int w, h;

void dfs(int y, int x) {
	if (v[y][x] == 1)v[y][x] = 0;

	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			int nx = x + i, ny = y + j;

			if (!(nx < 0 || ny < 0 || nx >= w||ny >= h)&&v[ny][nx] == 1) dfs(ny, nx);
		}
	}
	
	return;
}

int main(){
	while (1) {
		int ans=0;
		cin >> w >> h;
		if (w == 0 && h == 0)break;
		v.resize(h, vector<int>(w));
		rep(i, 0, h) {
			rep(j, 0, w) {
				cin >> v[i][j];
			}
		}

		rep(i, 0, h) {
			rep(j, 0, w) {
				if (v[i][j] == 1) {
					ans++;
					dfs(i, j);
				}
			}
		}
		cout << ans << endl;
		v.clear();
	}
	
	return 0;
}