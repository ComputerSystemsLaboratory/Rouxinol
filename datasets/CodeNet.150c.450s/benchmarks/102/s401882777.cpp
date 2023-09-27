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
#define all(a) (a).begin(), (a).end()

using namespace std;

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

signed main() {
	while (true) {
		int W, H;
		cin >> W >> H;

		if (W == 0) break;

		int sx, sy;

		vector<string> board;
		rep(y, H) {
			board.push_back(nextString());
			rep(x, board[y].size()) {
				if (board[y][x] == '@') {
					sx = x;
					sy = y;
				}
			}
		}

		auto visit = vector< vector<bool> >(H, vector<bool>(W, false));
		visit[sy][sx] = true;

		int cnt = 0;
		queue<int> q;
		q.push(sy * 100 + sx);
		while (!q.empty()) {
			int n = q.front();
			q.pop();

			int x = n % 100;
			int y = n / 100;

			cnt++;

			rep(dir, 4) {
				int nx = x + dx[dir];
				int ny = y + dy[dir];
				if (nx < 0 || nx >= W || ny < 0 || ny >= H) continue;
				if (visit[ny][nx]) continue;
				if (board[ny][nx] != '.') continue;

				q.push(ny * 100 + nx);
				visit[ny][nx] = true;
			}
		}

		cout << cnt << endl;
	}

    return 0;
}