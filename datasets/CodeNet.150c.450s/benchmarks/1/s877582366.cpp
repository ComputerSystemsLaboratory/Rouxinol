#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int dp[100000];
int main() {
	memset(dp, 0x3f, sizeof(dp));
	int n; scanf("%d", &n);
	rep(i, n) {
		int a; scanf("%d", &a);
		*lower_bound(dp, dp + n, a) = a;
	}
	printf("%d\n", lower_bound(dp, dp + n, 0x3f3f3f3f) - dp);
}