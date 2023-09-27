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

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

void paint(vector<string> &board, int y, int x) {
	queue<int> q;
	q.push(y * 100 + x);
	board[y][x] = '0';
	while (!q.empty()) {
		int now = q.front(); q.pop();

		int nowX = now % 100;
		int nowY = now / 100;

		for (int ay = -1; ay <= 1; ay++) {
			for (int ax = -1; ax <= 1; ax++) {
				int nx = nowX + ax;
				int ny = nowY + ay;
				if (nx < 0 || nx >= board[0].size() || ny < 0 || ny >= board.size()) continue;
				if (board[ny][nx] == '0') continue;

				q.push(ny * 100 + nx);
				board[ny][nx] = '0';
			}
		}
	}
}

signed main() {
	while (true) {
		int w, h;
		cin >> w >> h;

		if (w == 0) break;

		vector<string> board;
		rep(y, h) {
			string tmp = "";
			rep(x, w) {
				tmp += nextChar();
			}
			board.push_back(tmp);
		}

		int ret = 0;
		rep(y, h) {
			rep(x, w) {
				if (board[y][x] == '1') {
					paint(board, y, x);
					ret++;
				}
			}
		}

		cout << ret << endl;
	}

    return 0;
}