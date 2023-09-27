#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

#define int long long
#define MOD7 1000000007
#define MOD9 1000000009

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, a, n) for (int i = (a); i <= (n); i++)
#define all(a) (a).begin(), (a).end()

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

signed main() {
    int H;
    while (cin >> H) {
	if (H == 0) break;
	
	int b[10][5];
	rep(i, H) {
	    rep(j, 5) {
		cin >> b[i][j];
	    }
	}

	int ret = 0;
	bool change = true;
	while (change) {
	    change = false;
	    rep(y, H) {
		int pt = 0;
		REP(x, 1, 4) {
		    if (b[y][x] == b[y][pt]) continue;
		    if (x - pt >= 3 && b[y][pt] != 0) {
			change = true;
			REP(ax, pt, x - 1) {
			    ret += b[y][ax];
			    b[y][ax] = 0;
			}
		    }
		    pt = x;
		}
		if (5 - pt >= 3 && b[y][pt] != 0) {
		    change = true;
		    REP(ax, pt, 4) {
			ret += b[y][ax];
			b[y][ax] = 0;
		    }
		}
	    }
	    queue<int> q[5];
	    rep(x, 5) {
		for (int y = H - 1; y >= 0; y--) {
		    if (b[y][x] != 0) q[x].push(b[y][x]);
		}
		while (q[x].size() < H) q[x].push(0);
	    }
	    rep(x, 5) {
		for (int y = H - 1; y >= 0; y--) {
		    b[y][x] = q[x].front();
		    q[x].pop();
		}
	    }
	}
	cout << ret << endl;
    }

    return 0;
}