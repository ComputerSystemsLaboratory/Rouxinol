#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[20];
bool b[40001];
int main() {
	int n; scanf("%d", &n);
	b[0] = true;
	rep(i, n) {
		int a; scanf("%d", &a);
		for (int j = 40000; j >= a; j--)b[j] |= b[j - a];
	}
	int q; scanf("%d", &q);
	rep(i, q) {
		int m; scanf("%d", &m);
		puts(b[m] ? "yes" : "no");
	}
}