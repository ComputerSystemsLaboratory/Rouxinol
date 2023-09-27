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

int dy[4] = {1,0,-1,0}; // n e s w
int dx[4] = {0,1,0,-1};
char m[21][21];
int cnt;

void bfs(int sx, int sy, int w, int h)
{
	rep(i,0,4) {
		int nx = sx + dx[i];
		int ny = sy + dy[i];
		if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
		if (m[ny][nx] == '.') {
			m[ny][nx] = '@';
			cnt++;
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
		int sx, sy;
		cnt = 0;
		rep(i,0,h) rep(j,0,w) {
			cin >> m[i][j];
			if (m[i][j] == '@') {
				cnt++;
				sx = j;
				sy = i;
			}
		}
		//rep(i,0,h) { rep(j,0,w) cout << m[i][j]; cout << endl; }
		bfs(sx, sy, w, h);
		cout << cnt << endl;
	}	

	return 0;
}