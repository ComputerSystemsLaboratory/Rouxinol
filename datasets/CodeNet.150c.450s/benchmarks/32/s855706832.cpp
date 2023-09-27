#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int p[200];
int main() {
	int m, s, g;
	while (scanf("%d%d%d", &m, &s, &g), m) {
		rep(i, m)scanf("%d", &p[i]);
		sort(p, p + m, greater<>());
		int Max = 0, cnt;
		for (int i = s - 1; i < g; i++) {
			if (p[i] - p[i + 1] >= Max) {
				Max = p[i] - p[i + 1];
				cnt = i + 1;
			}
		}
		printf("%d\n", cnt);
	}
}