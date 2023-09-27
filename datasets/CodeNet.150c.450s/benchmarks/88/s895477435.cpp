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
struct rect {
	int h;
	int w;
};
int main() {
	vector<pair<int, int>>ps;
	for (int y = 1; y <= 150; ++y) {
		for (int x =y+1; x <= 150; ++x) {
			ps.push_back(make_pair(y, x));
		}
	}
	sort(ps.begin(), ps.end(), [](const pair<int, int>&l, const pair<int, int>&r) {
		const int ldig = l.first*l.first + l.second*l.second;
		const int rdig = r.first*r.first + r.second*r.second;
		return ldig == rdig ? l.first < r.first : ldig < rdig;
	});
	while (1) {
		int h, w; cin >> h >> w;
		if (!h)break;
		pair<int, int>p(h, w);
		auto it = upper_bound(ps.begin(), ps.end(),p, [](const pair<int, int>&l, const pair<int, int>&r) {
			const int ldig = l.first*l.first + l.second*l.second;
			const int rdig = r.first*r.first + r.second*r.second;
			return ldig == rdig ? l.first < r.first : ldig < rdig;
		});
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}