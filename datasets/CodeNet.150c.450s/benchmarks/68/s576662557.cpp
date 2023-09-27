#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[2000];
int main() {
	int n;
	while (scanf("%d", &n), n) {
		rep(i, n)scanf("%d", &a[i]);
		int Min = INT_MAX;
		rep(i, n)for (int j = i + 1; j < n; j++) {
			Min = min(Min, abs(a[j] - a[i]));
		}
		printf("%d\n", Min);
	}
}