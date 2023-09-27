#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<functional>
#include<queue>
using namespace std;
const long long inf = 9000000000;
struct P {
	long long cost, pos;
};
bool operator<(P a, P b) {
	return a.cost < b.cost;
}
bool operator>(P a, P b) {
	return a.cost > b.cost;
}
struct A {
	long long cost, to;
};
vector<A>a[100001];
long long b[100001];
int main() {
	long long v, e, r, s, t, d;
	cin >> v >> e >> r;
	for (int i = 0; i < e; i++) {
		cin >> s >> t >> d;
		a[s].push_back(A{ d,t });
	}
	priority_queue<P, vector<P>, greater<P>>p;
	fill(b, b + v, inf);
	p.push(P{ 0, r });
	b[r] = 0;
	while (!p.empty()) {
		P y = p.top(); p.pop();
		long long o = y.pos;
		for (int i = 0; i < (int)a[o].size(); i++) {
			if (b[a[o][i].to] > b[o] + a[o][i].cost) {
				b[a[o][i].to] = b[o] + a[o][i].cost;
				p.push(P{ b[a[o][i].to],a[o][i].to });
			}
		}
	}
	for (int i = 0; i < v; i++) {
		if (b[i] == inf) cout << "INF" << endl;
		else cout << b[i] << endl;
	}
}