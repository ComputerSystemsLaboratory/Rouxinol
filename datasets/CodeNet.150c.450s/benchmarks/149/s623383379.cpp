#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<cstring>
#define p pair<int,int>
#define P pair<int,p>
using namespace std;

P a[100000];
int Par[10000], Rank[10000];
int saiki(int b) {
	if (Par[b] == b)return b;
	return Par[b]=saiki(Par[b]);
}
void unite(int b, int c) {
	b = saiki(b); c = saiki(c);
	if (Rank[b] > Rank[c]) {
		Par[c] = b;
	}
	else if (Rank[b] < Rank[c]) {
		Par[b] = c;
	}
	else {
		Par[c] = b;
		Rank[b]++;
	}
}
signed main() {
	int b, c; cin >> b >> c;
	for (int k = 0; k < b; k++)Par[k] = k;
	for (int d = 0; d < c; d++) {
		int e, f, g;
		scanf("%d%d%d", &e, &f, &g);
		if (e) {
			cout << (saiki(f) == saiki(g)) << endl;
		}
		else {
			unite(f, g);
		}
	}
}