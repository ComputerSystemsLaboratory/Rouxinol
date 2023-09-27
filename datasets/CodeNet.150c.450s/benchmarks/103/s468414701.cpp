#include<bits/stdc++.h>
using namespace std;
int cnt,sum,ans;
int n,s;
void dfs(int sum,int k,int cnt){
	if(sum==s&&k<=
			10&&cnt==n){
		ans++;
		return;
	}
	if(sum>s||k==10||cnt>n)return;
	dfs(sum+k,k+1,cnt+1);
	dfs(sum,k+1,cnt);
}

int main() {

	while(1){
	cin>>n>>s;
	if(n==0&&s==0) break;
	ans=0;
	dfs(0,0,0);
	cout<<ans<<endl;
	}
}