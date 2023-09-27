#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)


int main(){
	int n,l;
	cin>>n>>l;
	
	vector<pii> vec(n);
	rep(i,n){
		int a,b;
		cin>>a>>b;
		vec[i] = pii(a,b);
	}
	
	int dp[100000+1]={};
	
	rep(i,n){
		int v,w;
		tie(v,w) = vec[i];
		for(int j=100000;j>=0;j--){
			if(j-w<0)continue;
			dp[j] = max(dp[j-w]+v,dp[j]);
		}
	}
	
	int maxi = -INF;
	rep(i,l+1)maxi = max(maxi,dp[i]);
	cout<<maxi<<endl;
}