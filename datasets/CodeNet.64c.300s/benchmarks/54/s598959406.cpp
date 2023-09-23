#include <bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=1;i<=n;i++)
#define drep(i,n) for(int i=n;i>=0;i--)
#define INF 100000005
#define MAX 100000001
#define dmp make_pair
#define dpb push_back
#define fi first
#define se second
using namespace std;
//__gcd(a,b), __builtin_popcount(a);

int a[100];
ll dp[100][21];
int main(){
	int n;
	scanf("%d", &n);
	rep(i,n)scanf("%d", &a[i]);
	dp[0][a[0]] = 1;
	for(int i = 1;i < n-1;i++){
		for(int j = 0;j <= 20;j++){
			if(j+a[i] <= 20)dp[i][j+a[i]] += dp[i-1][j];
			if(j-a[i] >= 0)dp[i][j-a[i]] += dp[i-1][j];
		}
	}
	printf("%lld\n", dp[n-2][a[n-1]]);
	return 0;
}