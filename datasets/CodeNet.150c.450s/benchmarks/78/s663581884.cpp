#include <iostream>
#include <cstdio>
#include <climits>
#include <cassert>
using namespace std;

#define rep(i,a,n) for(int i=a;i<n;i++)
#define dtm(i,n) rep(i,0,n)

int f(int n) {
	int ret;
	ret = n * (n+1) * (n+2) / 6;
	return ret;
}

int max_n;
int table[3000];
void make_table() {
	int i;
	for (i=0; i<1000000; i++) {
		int x = f(i);
		if (x > 1000000) break;
		table[i] = x;
	}
	max_n = i;
}

int memo[1000000];
int r(int n) {
	int i;
	if (n == 0) return 0;
	if (memo[n]) return memo[n];
	for (i=max_n-1; table[i]>n; i--) ;
	if (table[i] == n) {
		memo[n] = 1;
		return 1;
	}
	int m = INT_MAX;
	for (; i>=1; i--) {
		int x = 1 + r(n - table[i]);
		if (x < m) m = x;
	}
	memo[n] = m;
	return m;
}
int memo2[1000000];
int r2(int n) {
	int i;
	if (n == 0) return 0;
	if (memo2[n]) return memo2[n];
	for (i=max_n-1; table[i]>n; i--) ;
	if (n%2==1 && table[i] == n) {
		memo2[n] = 1;
		return 1;
	}
	int m = INT_MAX;
	for (; i>=1; i--) {
		if (table[i]%2==0) continue;
		int x = 1 + r2(n - table[i]);
		if (x < m) m = x;
	}
	memo2[n] = m;
	return m;
}

void solve(int n) {
	printf("%d %d\n", r(n), r2(n));
}

int main() {
	int n;
	make_table();
	for (;;) {
		scanf("%d", &n);
		if (n==0) break;
		solve(n);
	}
	return 0;
}