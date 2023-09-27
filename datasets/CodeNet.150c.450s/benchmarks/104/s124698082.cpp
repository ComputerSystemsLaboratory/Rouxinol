#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;

int d[30];
int main() {
	int w, n; scanf("%d%d", &w, &n);
	rep(i, w)d[i] = i + 1;
	rep(i, n) {
		int a, b; scanf("%d,%d", &a, &b); a--; b--;
		swap(d[a], d[b]);
	}
	rep(i, w)printf("%d\n", d[i]);
}