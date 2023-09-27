#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define INF 1000000000000000
#define fi first
#define se second
#define all(v) v.begin(),v.end()
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
#define pb push_back
struct edge{int to,cost;};
typedef pair<int,int> P;
int c[20];
int dp[50001];
signed main(){
	int n,m;
	cin>>n>>m;
	rep(i,m)cin>>c[i];
	fill(dp+1,dp+50001,INF);
	for(int i=0;i<=50000;i++){
		rep(j,m){
			if(i+c[j]<=n)dp[i+c[j]]=min(dp[i+c[j]],dp[i]+1);
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}

