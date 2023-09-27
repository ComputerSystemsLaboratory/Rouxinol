#include <iostream>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <bitset>
#include <random>
#include <complex>
#include <assert.h>

using namespace std;
typedef long long ll;
#define endl '\n'

template<typename T>
inline bool chmin(T& x, T a) {
	if (x >= a) { x = a; return true; }
	return false;
}

template<typename T>
inline bool chmax(T& x, T a) {
	if (x <= a) { x = a; return true; }
	return false;
}

int score;
int stone[10][5];
bool flag[10][5];

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(0);

	while (1) {
		int H; cin >> H;
		if (H == 0) { break; }
		
		score = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 5; j++) {
				stone[i][j] = 0;
			}
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < 5; j++) {
				int k; cin >> k;
				stone[H - 1 - i][j] = k;
			}
		}

		bool f;
		while(1){
			f = false;
			for (int i = 0; i < H; i++) {
				for (int j = 0; j < 5; j++) {
					flag[i][j] = false;
				}
			}
			for (int i = 0; i < H; i++) {// 隣り合うものにチェック
				for (int j = 1; j < 4; j++) {
					if (stone[i][j - 1] == stone[i][j] && stone[i][j] == stone[i][j + 1] && stone[i][j] != 0) {
						f = true;
						flag[i][j - 1] = true;
						flag[i][j] = true;
						flag[i][j + 1] = true;
					}
				}
			}
			for (int j = 0; j < 5; j++) {// 消去
				for (int i = 0; i < H; i++) {
					if (flag[i][j] == true) {
						score += stone[i][j];
						stone[i][j] = 0;
					}
				}
			}
			for (int j = 0; j < 5; j++) {// 消去
				for (int i = 0; i < H; i++) {
					if (stone[i][j] != 0) {
						int k = i;
						while (k > 0 && stone[k - 1][j] == 0) {
							stone[k - 1][j] = stone[k][j];
							stone[k][j] = 0;
							k--;
						}
					}
				}
			}
			if (f == false) {
				break;
			}
		}
		cout << score << endl;
	}

	return 0;
}
