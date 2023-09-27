#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

struct st {
	int from, to, c;
};
vector<st>E;
int d[1000];
int main() {
	int v, e, r; scanf("%d%d%d", &v, &e, &r);
	rep(i, e) {
		int s, t, d; scanf("%d%d%d", &s, &t, &d);
		E.push_back({ s,t,d });
	}
	memset(d, 0x3f, sizeof(d));
	d[r] = 0;
	rep(i, v)rep(j, e) {
		st s = E[j];
		if (d[s.from] != INF&&d[s.to] > d[s.from] + s.c) {
			d[s.to] = d[s.from] + s.c;
			if (i == v - 1) {
				puts("NEGATIVE CYCLE"); return 0;
			}
		}
	}
	rep(i, v) {
		if (d[i] == INF)puts("INF");
		else printf("%d\n", d[i]);
	}
}