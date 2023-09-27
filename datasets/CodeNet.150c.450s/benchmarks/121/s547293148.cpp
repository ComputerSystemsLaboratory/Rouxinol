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

char field[100][101];
int h, w;
queue<P> que;
int dx[4] = { 0,0,-1,1 }, dy[4] = { -1,1,0,0 };
int ret;

void solve() {
	Loop(i, h) {
		Loop(j, w) {
			if (field[i][j] != '.') {
				que.push(P(i, j));
				char c = field[i][j];
				field[i][j] = '.';
				while (que.size() > 0) {
					P p = que.front(); que.pop();
					Loop(k, 4) {
						int a = p.first + dx[k], b = p.second + dy[k];
						if (a >= 0 && a <= h - 1 && b >= 0 && b <= w - 1 && field[a][b] == c) {
							field[a][b] = '.';
							que.push(P(a, b));
						}
					}
				}
				ret++;
			}
		}
	}
}

int main() {
	while (cin >> h >> w, h || w) {
		Loop(i, h) {
			Loop(j, w) {
				cin >> field[i][j];
			}
		}
		ret = 0;
		solve();
		cout << ret << endl;
	}
	return 0;
}