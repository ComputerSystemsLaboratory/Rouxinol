#include <bits/stdc++.h>

using namespace std;

int R, C, Ans;
int MapData[10][10000];
bool FlagRow[10];

int countOK() {
	int curSum, total;

	total = 0;
	for (int j = 0; j < C; ++j) {
		curSum = 0;
		for (int i = 0; i < R; ++i) {
			if (FlagRow[i] && !MapData[i][j] || !FlagRow[i] && MapData[i][j]) {
				++curSum;
			}
		}
		total += max(curSum, R - curSum);
	}

	return total;
}

void solve(int curRow) {

	if (curRow == R) {
		Ans = max(Ans, countOK());
		return;
	}
	
	FlagRow[curRow] = false;
	solve(curRow + 1);

	FlagRow[curRow] = true;
	solve(curRow + 1);
}

int main() {

	while (cin >> R >> C, R) {
		for (int i = 0; i < R; ++i) {
			for (int j = 0; j < C; ++j) {
				cin >> MapData[i][j];
			}
		}
		Ans = -1;
		solve(0);
		cout << Ans << endl;
	}

	return 0;
}
