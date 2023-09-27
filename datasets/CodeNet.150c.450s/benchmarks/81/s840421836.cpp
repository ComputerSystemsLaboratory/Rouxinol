#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.answer"
int main() {
	while (1) {
		int N; cin >> N;
		if (!N)break;
		map<int, int>mp;
		map<int, int>revmp;
		int id = 0;
		vector<vector<int>>diss(10, vector<int>(10, 1e8));
		for (int i = 0; i < N; ++i) {
			int a, b, n; cin >> a >> b >> n;
			if (mp.find(a) == mp.end()) {
				mp[a] = id;
				revmp[id] = a;
				id++;
			}
			if (mp.find(b) == mp.end()) {
				mp[b] = id;
				revmp[id] = b;
				id++;
			}
			diss[mp[a]][mp[b]] = min(diss[mp[a]][mp[b]], n);
			diss[mp[b]][mp[a]] = min(diss[mp[b]][mp[a]], n);
		}
		for (int i = 0; i < id; ++i) {
			diss[i][i] = 0;
		}
		for (int k = 0; k < id; ++k) {
			for (int i = 0; i < id; ++i) {
				for (int j = 0; j < id; ++j) {
					diss[i][j] = min(diss[i][k] + diss[k][j], diss[i][j]);
				}
			}
		}
		pair<int, int>amin(1e9, 1e9);
		for (int s = 0; s < id; ++s) {
			int len = 0;
			for (int t = 0; t < id; ++t) {
				len += diss[s][t];
			}
			if (amin > make_pair(len, revmp[s])) {
				amin = make_pair(len, revmp[s]);
			}
		}
		cout << amin.second << " " << amin.first << endl;
	}
	return 0;
}