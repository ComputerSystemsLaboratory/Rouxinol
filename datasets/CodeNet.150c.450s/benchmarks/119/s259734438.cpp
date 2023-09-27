#define _CRT_SECURE_NO_WARNINGS // #pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <sstream>
#include <cmath>
#include <set>
#include <map>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;

typedef pair<int, int> Pii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;

int dy[8] = {1,1,0,-1,-1,-1,0,1}; // n ne e se s sw w nw
int dx[8] = {0,1,1,1,0,-1,-1,-1};

int m[51][51];
int cnt;

void bfs(int sx, int sy, int w, int h)
{
	rep(i,0,8) {
		int nx = sx + dx[i];
		int ny = sy + dy[i];
		if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
		if (m[ny][nx]) {
			m[ny][nx] = 0;
			bfs(nx, ny, w, h);
		}
	}
}

int main()
{
	while(1) {
		int w, h;
		cin >> w >> h;
		if (!w && !h) break;
		rep(i,0,h) rep(j,0,w) cin >> m[i][j];
		cnt = 0;
		rep(i,0,h) rep(j,0,w) if (m[i][j])	{
			cnt++;
			m[i][j] = 0;
			bfs(j,i,w,h);
		};
		cout << cnt << endl;
	}

	return 0;
}