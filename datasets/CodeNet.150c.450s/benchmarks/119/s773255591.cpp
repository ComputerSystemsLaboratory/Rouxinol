#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <string>
#include <climits>

#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define PRINT(STR) cout << (STR) << endl

typedef long long ll;
using namespace std;

const int SEA = 0;
const int GROUND = 1;

int w, h;
int board[51][51];

void dfs(int y, int x) {
	if (x < 0 || x >= w) return;
	if (y < 0 || y >= h) return;
	if (board[y][x] == 0) return;
	board[y][x] = 0;
	dfs(y - 1, x);
	dfs(y - 1, x + 1);
	dfs(y, x + 1);
	dfs(y + 1, x + 1);
	dfs(y + 1, x);
	dfs(y + 1, x - 1);
	dfs(y, x - 1);
	dfs(y - 1, x - 1);
}

void calc() {
	int count = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (board[i][j] == GROUND) {
				count++;
				dfs(i, j);
			}
		}
	}
	PRINT(count);
}

int main() {
	cin.tie(0); //対話型には使えない
	ios::sync_with_stdio(false); //printfと共には使えない
	while (cin >> w >> h, w + h != 0) {
		REP(i, h) {
			REP(j, w) {
				char c;
				cin >> c;
				if(c == '0') {
					board[i][j] = SEA;
				} else {
					board[i][j] = GROUND;
				}
			}
		}
		calc();
	}
	return 0;
}