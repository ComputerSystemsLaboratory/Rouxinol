#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int, int>P;

vector<P>E[100000];
int d[100000];
int main() {
	int v, e, r; scanf("%d%d%d", &v, &e, &r);
	rep(i, e) {
		int s, t, d; scanf("%d%d%d", &s, &t, &d);
		E[s].push_back(P(t, d));
	}
	memset(d, 0x3f, sizeof(d));
	priority_queue<P, vector<P>, greater<P>>que;
	d[r] = 0;
	que.push(P(0, r));
	while (!que.empty()) {
		P p = que.top(); que.pop();
		if (p.first != d[p.second])continue;
		for (P u : E[p.second]) {
			if (d[u.first] > d[p.second] + u.second) {
				d[u.first] = d[p.second] + u.second;
				que.push(P(d[u.first], u.first));
			}
		}
	}
	rep(i, v) {
		if (d[i] == INF)puts("INF");
		else printf("%d\n", d[i]);
	}
}