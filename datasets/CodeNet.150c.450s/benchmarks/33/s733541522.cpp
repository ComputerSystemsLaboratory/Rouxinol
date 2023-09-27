#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int x, y, s;
	while (scanf("%d%d%d", &x, &y, &s), s) {
		int Max = 0;
		for (int i = 1; i < s; i++) {
			for (int j = 1; j <= i&&j + i <= s; j++) {
				if (i*(100 + x) / 100 + j*(100 + x) / 100 == s) {
					Max = max(Max, i*(100 + y) / 100 + j*(100 + y) / 100);
				}
			}
		}
		printf("%d\n", Max);
	}
}