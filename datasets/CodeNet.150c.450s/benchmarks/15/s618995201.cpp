#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int s[10000];
int main() {
	int n; scanf("%d", &n);
	rep(i, n)scanf("%d", &s[i]);
	sort(s, s + n);
	int q; scanf("%d", &q);
	int cnt = 0;
	rep(i, q) {
		int t; scanf("%d", &t);
		if (binary_search(s, s + n, t))cnt++;
	}
	printf("%d\n", cnt);
}