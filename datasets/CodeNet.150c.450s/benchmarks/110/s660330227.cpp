#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <cstdlib>
#define INF 100000000
#define _INF -100000000
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> P;

char field[1000][1001];
int d[1000][1000];
int h, w, n;
int sx, sy;
int dx[4] = { 0,0,-1,1 }, dy[4] = { -1,1,0,0 };
int ret;
queue<P> que;

void solve() {
	char c = '1';
	while (c < '1' + n) {
		Loop(i, h) {
			Loop(j, w) {
				d[i][j] = -1;
			}
		}
		que.push(P(sx, sy));
		d[sx][sy] = ret;
		while (que.size()) {
			P p = que.front(); que.pop();
			Loop(k, 4) {
				int a = p.first + dx[k], b = p.second + dy[k];
				if (a >= 0 && a <= h - 1 && b >= 0 && b <= w - 1
					&& field[a][b] != 'X' && d[a][b] == -1) {
					d[a][b] = d[p.first][p.second] + 1;
					if (field[a][b] == c) {
						ret = d[a][b];
						sx = a; sy = b;
						while (que.size()) que.pop();
						c++;
						break;
					}
					else que.push(P(a, b));
				}
			}
		}
	}

}

int main() {
	cin >> h >> w >> n;
	Loop(i, h) {
		Loop(j, w) {
			cin >> field[i][j];
			if (field[i][j] == 'S') { sx = i;sy = j; }
		}
	}
	ret = 0;
	solve();
	cout << ret << endl;
	return 0;
}