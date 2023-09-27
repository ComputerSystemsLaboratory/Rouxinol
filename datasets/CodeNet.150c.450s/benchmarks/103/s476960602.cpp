#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int n,s,ans;

void dfs(int k,int now,int m){
	if(k==n){
		if(now==s) ans++;
		return;
	}
	rep(i,m+1,10){
		dfs(k+1,now+i,i);
	}
	return;
}


signed main(){
	while(1){
		cin>>n>>s;
		if(n+s==0) break;
		ans=0;
		dfs(0,0,-1);
		o(ans);
	}
}