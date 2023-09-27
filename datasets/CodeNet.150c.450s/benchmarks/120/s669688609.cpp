#include <iostream>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<map>
#include<cstdio>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define mp make_pair
#define pb push_back
#define P pair<int,int>
int m,n;
bool t[22][11000];
int dp[2000][11000];
int main(){
while(cin>>m>>n,n||m){
rep(i,2000)rep(j,10000)dp[i][j]=0;
rep(i,22)rep(j,10000)t[i][j]=0;
rep(i,m){
	rep(j,n)cin>>t[i][j];
}

int ans=0,cnt=0;
rep(i,(1<<m)){

	cnt=0;
	rep(j,n){
		rep(k,m){
			if(i&(1<<k)&&t[k][j])dp[i][j]++;
			if((!(i&(1<<k)))&&!t[k][j])dp[i][j]++;
			
		}
	}
	rep(j,n)cnt+=max(dp[i][j],m-dp[i][j]);
	ans=max(cnt,ans);
}

	cout<<ans<<endl;
}
	return 0;
}
