#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<string, int>P;

char s[11];
int main() {
	int n, q; scanf("%d%d", &n, &q);
	queue<P>que;
	int tim = 0;
	rep(i, n) {
		int t; scanf("%s%d", s, &t);
		que.push(P(s, t));
	}
	while (!que.empty()) {
		P p = que.front(); que.pop();
		if (p.second <= q) {
			tim += p.second;
			printf("%s %d\n", p.first.c_str(), tim);
		}
		else {
			tim += q;
			p.second -= q; que.push(p);
		}
	}
}