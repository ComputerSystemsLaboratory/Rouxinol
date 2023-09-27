#include<bits/stdc++.h>
#define INF INT_MAX/2
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

char a[50], b[50];
int main() {
	int n, r;
	while (scanf("%d%d", &n, &r), n) {
		for (int i = n - 1; i >= 0; i--)a[i] = n - i;
		rep(i, r) {
			int p, c; scanf("%d%d", &p, &c);
			memcpy(b, a, p - 1);
			memmove(a, a + p - 1, c);
			memcpy(a + c, b, p - 1);
		}
		printf("%d\n", (int)a[0]);
	}
}