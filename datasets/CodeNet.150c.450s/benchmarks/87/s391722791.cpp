#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)
#define for_rev(i,a,b) for(int i=(a);i>=(b);--i)
#define minit(a, b) memset(a, b, sizeof(a))

int H, board[11][6];
const int NIL = -1;

bool fall(int x, int y) {
	if (board[y][x] == NIL) return false;
	
	if (board[y-1][x] == NIL) {
		board[y-1][x] = board[y][x];
		board[y][x] = NIL;
		return true;
	}
	
	return false;
}

void erase(int x, int y, int len) {
	for_(xx,x,x+len) board[y][xx] = NIL;
}

int vanish(int y) {
	int x = 0, cur = board[y][0], len = 1;
	
	while (x <= 2) {
		if (cur != NIL) {
			while (cur == board[y][x+len]) ++len;
		}
		
		if (len >= 3) break;
		x += len;
		cur = board[y][x];
		len = 1;
	}
	
	if (len < 3) return 0;
	erase(x, y, len);
	return cur * len;
}

void solve() {
	int score = 0;
	
	while (1) {
		int add = 0;
		
		for_(y,0,H) add += vanish(y);
		
		for_(y,1,H) {
			for_(x,0,5) {
				if (fall(x, y)) {
					y = 0;
					break;
				}
			}
		}
		
		if (add == 0) break;
		score += add;
	}
	
	cout << score << endl;
}

int main() {
	while (cin >> H, H) {
		minit(board, NIL);
		for_rev(y,H-1,0) for_(x,0,5) cin >> board[y][x];
		solve();
	}
}