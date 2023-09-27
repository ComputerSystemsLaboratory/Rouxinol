#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"
int main() {
	while (1) {
		int R, C; cin >> R >> C;
		if (!R)break;
		vector<vector<int>>field(R, vector<int>(C));
		for (int i = 0; i < R; ++i) {
			for (int j = 0; j < C; ++j) {
				int a; cin >> field[i][j];
			}
		}
		int ans = 0;
		for (int i = 0; i < (1 << R); ++i) {
			bitset<10>bs(i);
			for (int r = 0; r < R; ++r) {
				if (bs[r]) {
					for (int c = 0; c < C; ++c) {
						field[r][c] = !field[r][c];
					}
				}
			}
			int sum = 0;
			for (int c = 0; c < C; ++c) {
				int anum = 0;
				for (int r = 0; r < R; ++r) {
					if (field[r][c])anum++;
				}
				sum += max(anum, R - anum);
			}
			ans = max(ans, sum);
			for (int r = 0; r < R; ++r) {
				if (bs[r]) {
					for (int c = 0; c < C; ++c) {
						field[r][c] = !field[r][c];
					}
				}
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}