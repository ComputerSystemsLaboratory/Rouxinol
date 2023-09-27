#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;


void fall(vector<vector<int>>&stones) {
	for (int t = 0; t < 5; ++t) {
		for (int y = stones.size()-1; y > 0; --y) {
			for (int x = 0; x < 5; ++x) {
				if (stones[y][x] == -1 && stones[y - 1][x]!=-1) {
					stones[y][x] = stones[y - 1][x];
					stones[y - 1][x] = -1;
				}
			}
		}
	}
}

int getans(vector<vector<int>>&stones) {
	vector<vector<bool>>banishes(stones.size(), vector<bool>(5, false));
	int score = 0;
	for (int y = 0; y < stones.size(); ++y) {
		for (int l = 0; l < 3; ++l) {
			if (stones[y][l] == stones[y][l + 1] && stones[y][l + 1] == stones[y][l + 2] && stones[y][l] != -1) {
				for (int x =l; x < l+3; ++x) {
					banishes[y][x] = true;
				}
			}
		}
	}
	for (int y = 0; y < stones.size(); ++y) {
		for (int x = 0; x < 5; ++x) {
			if (banishes[y][x]) {
				score += stones[y][x];
				stones[y][x] = -1;
			}
		}
	}
	if (score) {
		fall(stones);
		return score + getans(stones);
	}
	else {
		return 0;
	}
}
int main() {
	while (1) {
		int N; cin >> N;
		if (N) {
			vector<vector<int>>stones(N, vector<int>(5));
			for (int y = 0; y < N; ++y) {
				for (int x = 0; x < 5; ++x) {
					cin >> stones[y][x];
				}
			}
			int ans = getans(stones);
			cout << ans << endl;
		}
		else {
			break;
		}
	}
	return 0;
}