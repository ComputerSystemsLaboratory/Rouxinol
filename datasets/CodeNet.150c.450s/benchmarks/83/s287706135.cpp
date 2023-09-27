#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e6+1)
//#define INF (1LL<<59)

vector<pii> vec;
int dp[101][100001];
int dfs(int ind,int w){
	if(w<0)return -INF;
	if(ind<=0)return 0;
	if(dp[ind][w]!=-1)return dp[ind][w];
	return dp[ind][w] = max(dfs(ind-1,w-vec[ind-1].second)+vec[ind-1].first,dfs(ind-1,w));
}


int main(){
	int n,l;
	cin>>n>>l;
	vec.resize(n);
	
	rep(i,n){
		int a,b;
		cin>>a>>b;
		vec[i] = pii(a,b);
	}
	memset(dp,-1,sizeof(dp));
	cout<<dfs(n,l)<<endl;
}