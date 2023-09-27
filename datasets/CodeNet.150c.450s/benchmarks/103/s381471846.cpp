#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int ans;

void solve(int n,int s,int m){
	rep(i,m+1,10){
		if(n==1&&s==i){
			ans++;
			break;
		}
		solve(n-1,s-i,i);
	}
}

int main(){
	int n,s;
	while(1){
		cin>>n>>s;
		if(n==0&&s==0) break;
		ans=0;
		solve(n,s,-1);
		cout<<ans<<endl;
	}
}