#include <bits/stdc++.h>
#define ll long long
#define INF 999999999
#define MOD 1000000007
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 105;
const int MAX_W = 10005;

int v[MAX_N];
int w[MAX_N];
int dp[MAX_W];

int main()
{
	int n,W;
	cin >> n >> W;
	rep(i,n){
		cin >> v[i] >> w[i];
	}
	rep(i,n){
		for(int j=W;j>=w[i];j--){
			dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	cout << dp[W] << "\n";
	return 0;
}