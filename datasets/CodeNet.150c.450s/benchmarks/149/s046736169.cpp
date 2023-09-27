#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <complex>
#include <vector>
#include <bitset>
#include <cstdio>
#include <cmath>
#include <time.h>
#include <tuple>
#define all(c) ((c).begin(),(c).end())
#define rall(c) ((c).rbegin(),(c).rend())
#define ll long long
#define fi first
#define se second
#define inf (999999999)
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int n, q;
int par[10100], rank1[10100];
inline void init() {
	for (int i = 0; i < n; i++) {
		par[i] = i;
		rank1[i] = 0;
	}
}
inline int find(int x) {
	if (par[x] == x) {
		return x;
	}
	else {
		par[x] = find(par[x]);
		return par[x];
	}
}
inline bool same(int x,int y) {
	return find(x) == find(y);
}
inline void unite(int x, int y) {
	if (find(x) == find(y))return;
	else {
		if (rank1[x] > rank1[y]) {
			par[y] = x;
		}
		else {
			par[x] = y;
			if (rank1[x] == rank1[y]) {
				rank1[y]++;
			}
		}
	}
}
inline void Union(int x,int y) {
	unite(find(x), find(y));
}
int main() {
	cin >> n >> q;
	init();
	for (int i = 0; i < q; i++) {
		int comp, x, y; cin >> comp >> x >> y;
		if (comp) {
			//cout << comp << " " << x << " " << y << endl;
			//for (int j = 0; j < n; j++) {
				//cout << par[j] << " ";
			//}
			//cout << endl;
			cout << same(x, y) << endl;
		}
		else {
			Union(x, y);
		}
	}
	return 0;
}