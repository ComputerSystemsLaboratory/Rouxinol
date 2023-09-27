#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[20];
int main() {
	int n; scanf("%d", &n);
	rep(i, n)scanf("%d", &a[i]);
	unordered_set<int>se;
	rep(i, 1 << n) {
		int sum = 0;
		rep(j, n) {
			if (i >> j & 1)sum += a[j];
		}
		se.insert(sum);
	}
	int q; scanf("%d", &q);
	rep(i, q) {
		int m; scanf("%d", &m);
		puts(se.find(m) != se.end() ? "yes" : "no");
	}
}