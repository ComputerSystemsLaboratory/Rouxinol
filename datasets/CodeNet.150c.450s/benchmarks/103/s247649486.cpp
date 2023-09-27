#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int ans,n,s;

void dfs(int i,int sum,int m){
	if(i==0){
		if(sum==s){
			ans++; //o(m);
		}
		return;
	}
	rep(j,m,10){
		dfs(i-1,sum+j,j+1);
	}
}

int main(){
	while(1){
		cin>>n>>s;
		if(n==0 && s==0) break;
		ans=0;
		dfs(n,0,0);
		o(ans);
	}
}