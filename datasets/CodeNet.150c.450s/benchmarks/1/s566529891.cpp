#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;
const double pi = 3.14159265358979323846;

int main(){
	int n;cin>>n;
	int a[n];for(int i=0;i<n;i++) cin>>a[i];

	int dp[n];fill(dp,dp+n,inf);
	for(int i=0;i<n;i++){
		*lower_bound(dp,dp+n,a[i])=a[i];
		//for(int i=0;i<n;i++) cout<<dp[i]<<", ";
		//cout<<endl;
	}

	cout<<lower_bound(dp,dp+n,inf)-dp<<endl;
}
