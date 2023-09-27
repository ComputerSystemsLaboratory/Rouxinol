#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int, int>P;

bool used[10000];
vector<P>E[10000];
int main() {
	int v, e; scanf("%d%d", &v, &e);
	rep(i, e) {
		int s, t, w; scanf("%d%d%d", &s, &t, &w);
		E[s].push_back(P(w, t));
		E[t].push_back(P(w, s));
	}
	priority_queue<P, vector<P>, greater<P>>que;
	int res = 0;
	que.push(P(0, 0));
	while (!que.empty()) {
		P p = que.top(); que.pop();
		if (used[p.second])continue;
		used[p.second] = true;
		res += p.first;
		for (P i : E[p.second])
			que.push(i);
	}
	printf("%d\n", res);
}