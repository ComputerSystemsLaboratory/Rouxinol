#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

const int my_inf=2147483647;
const long long int my_linf=9223372036854775807;
const int dx[4] = { -1,0,1,0 };
const int dy[4] = { 0,1,0,-1 };
map<char, int>mp;
int main() {
	mp['N'] = 1;
	mp['E'] = 2;
	mp['S'] = 3;
	mp['W'] = 0;
	while (1) {
		int N; cin >> N;
		if (!N)break;
		vector<vector<bool>>fi(21, vector<bool>(21));
		while (N--) {
			int x, y; cin >> x >> y;
			fi[y][x] = true;
		}
		cin >> N;
		int nx = 10;
		int ny = 10;
		fi[ny][nx] = false;
		while (N--) {
			char a;
			int l; cin >> a >> l;
			for (int i = 0; i < l; ++i) {
				nx += dx[mp[a]];
				ny += dy[mp[a]];
				fi[ny][nx] = false;
			}
		}
		bool ok = true;
		for (int i = 0; i < 21; ++i) {
			for (int j = 0; j < 21; ++j) {
				if (fi[i][j]) {
					ok = false;
					break;
				}
			}
		}
		if (ok)cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}