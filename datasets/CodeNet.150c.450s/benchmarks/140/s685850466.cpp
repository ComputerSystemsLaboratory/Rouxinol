#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for(int i = 0; i < (n); i++)
#define mp make_pair
#define all(x) x.begin(),x.end()
#define puts(x) cout << x << endl
using namespace std;
int pt[123456], v, e, ans;
pair<int, int>g[123456]; vector<pair<int, int>>vt;
void setup() {
	cin >> v >> e;
	for0(i, v) pt[i] = i;
	return;
}
int root(int i) {
	if (pt[i] == i)return i;
	else return pt[i] = root(pt[i]);
}
void unite(int a, int b) {
	pt[root(b)] = root(a);
	root(b);
	return;
}
signed main() {
	setup();
	for0(i, e) {
		int vi;
		cin >> g[i].first >> g[i].second >> vi;
		vt.push_back(mp(vi, i));
	}
	sort(all(vt));
	for0(i, e) {
		if (root(g[vt[i].second].first) != root(g[vt[i].second].second)) {
			unite(g[vt[i].second].first, g[vt[i].second].second);
			ans += vt[i].first;
		}
	}
	puts(ans);
}
