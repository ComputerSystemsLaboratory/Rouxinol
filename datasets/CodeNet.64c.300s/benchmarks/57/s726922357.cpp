#include <iostream>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<cstring>
#include<map>
#include<cstdio>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define mp make_pair
#define pb push_back
#define P pair<int,int>
int m,n;
bool t[22][11000];
int dp[11000];
int main(){
while(cin>>m>>n,n||m){
memset(dp,0,sizeof dp);
rep(i,22)memset(t[i],0,sizeof t[i]);

rep(i,m){
	rep(j,n)cin>>t[i][j];
}

int ans=0,cnt=0;
rep(i,(1<<m)){

	cnt=0;
	rep(j,n){
		rep(k,m){
			if(i&(1<<k)&&t[k][j])dp[j]++;
			if((!(i&(1<<k)))&&!t[k][j])dp[j]++;
			
		}
	}
	rep(j,n)cnt+=max(dp[j],m-dp[j]);
	memset(dp,0,sizeof dp);
	ans=max(cnt,ans);
}

	cout<<ans<<endl;
}
	return 0;
}
