#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;

int b[10][10000];
int main() {
	int r, c;
	while (scanf("%d%d", &r, &c), r) {
		rep(i, r)rep(j, c)scanf("%d", &b[i][j]);
		int Max = 0;
		rep(i, 1 << r) {
			int sum = 0;
			rep(j, c) {
				int a[2]{};
				rep(k, r) {
					if (i >> k & 1)a[!b[k][j]]++;
					else a[b[k][j]]++;
				}
				sum += max(a[0], a[1]);
			}
			Max = max(Max, sum);
		}
		printf("%d\n", Max);
	}
}