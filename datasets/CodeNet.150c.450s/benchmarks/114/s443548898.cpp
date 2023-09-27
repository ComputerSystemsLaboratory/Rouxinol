#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
const int num = 10000;
const int INF = 2000000000;
int c[num];
int pe[num];
int d[num];
typedef pair<int, int> p;
vector <p> v[num];
int main() {
	int n;
	cin >> n;
	fill(pe, pe + n, INF);
	fill(c, c + n, 0);
	fill(d, d + n, INF);
	d[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int w; cin >> w;
			if (w != -1) v[i].push_back(p(w, j));
		}
	}
	priority_queue <p, vector<p>, greater<p> > q;
	for (int i = 0; i < v[0].size(); i++) {
		q.push(p(v[0][i].first, v[0][i].second));
		d[v[0][i].second] = v[0][i].first;
		pe[v[0][i].second] = 0;
	}
	c[0] = 1;
	while (!q.empty()) {
		int f = q.top().first;
		int s = q.top().second;
		q.pop();
		c[s] = 1;
		if (d[s] < f) continue;
		for (int i = 0; i < v[s].size(); i++) {
			int fi = v[s][i].first;
			int se = v[s][i].second;
			if (c[se]) continue;
			if (pe[se] == INF || d[se] > fi) {
				d[se] = fi;
				pe[se] = s;
				q.push(p(fi, se));
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += d[i];
	cout << sum << endl;
	return 0;
}