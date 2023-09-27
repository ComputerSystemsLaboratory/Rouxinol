#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
const double PI = 3.14159265358979;
const double E = 2.718281828459045;
const double root2 = sqrt(2);
typedef pair<int, int> P;
typedef unsigned int ui;
const ll key = 998244353;
int main() {
	int h;
	while (cin >> h, h) {
		int score = 0;
		int board[10][5];
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> board[i][j];
			}
		}
		while (true) {
			bool f = true;
			int del[10][5] = {};
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < 5; j++) {
					if (board[i][j] == 0)continue;
					int cnt = 1; int k = 1;
					while (j + k < 5 && board[i][j + k] == board[i][j]) {
						k++; cnt++;
					}
					k = -1;
					while (j + k >= 0 && board[i][j + k] == board[i][j]) {
						k--; cnt++;
					}
					if (cnt >= 3) {
						del[i][j] = 1;
						f = false;
					}
				}
			}
			if (f)break;
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < 5; j++) {
					if (del[i][j] == 1) {
						score += board[i][j];
						board[i][j] = 0;
					}
				}
			}
			for (int roo = 0; roo < h; roo++) {
				for (int j = 0; j < 5; j++) {
					for (int i = 0; i < h-1; i++) {
						if (board[i + 1][j] == 0) {
							swap(board[i][j], board[i + 1][j]);
						}
					}
				}
			}
		}
		cout << score << endl;
	}
	return 0;
}
