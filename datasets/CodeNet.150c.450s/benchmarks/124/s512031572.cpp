#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<cstring>
#define P pair<int,int>//cost to
using namespace std;

vector<P>rinsetu[100];
int mincost[100];
signed main() {
	int a; cin >> a;
	for (int b = 0; b < a; b++) {
		int c, d; cin >> c >> d;
		for (int e = 0; e < d; e++) {
			int f, g; scanf("%d%d", &f, &g);
			rinsetu[c].push_back(P(g,f));
		}
	}
	fill(mincost, mincost + a, 1 << 29);
	mincost[0] = 0;
	priority_queue<P, vector<P>, greater<P>>Q;
	Q.push(P(0,0));
	while (Q.size()) {
		P t = Q.top(); Q.pop();
		if (t.first > mincost[t.second])continue;
		for (P i : rinsetu[t.second]) {
			if (mincost[i.second] > t.first + i.first) {
				mincost[i.second] = t.first + i.first;
				Q.push(P(t.first + i.first,i.second));
			}
		}
	}
	for (int i = 0; i < a; i++) {
		cout << i << " " << mincost[i] << endl;
	}
}