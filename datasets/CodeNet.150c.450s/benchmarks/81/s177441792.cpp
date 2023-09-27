#include<cstdio>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<set>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		
		
		int dp[111][111]={0};
		rep(i,111)rep(j,111)dp[i][j]=1000000000;
		
		
		int m=0;
		rep(i,n){
			int a,b,c;
			cin>>a>>b>>c;
			dp[a][b]=min(c,dp[a][b]);
			dp[b][a]=min(c,dp[a][b]);
			
			m=max(m,max(a,b));
		}
		m++;
		rep(i,111)dp[i][i]=0;
		
		
		rep(k,111){
			rep(i,111){
				rep(j,111){
					dp[i][j] = min(dp[i][k]+dp[k][j],dp[i][j]);
				}
			}
		}
		
		
		int ans=1000000000;
		int minp=-1;
		rep(i,111){
			int sum=0;
			rep(j,111){
				if(dp[i][j]==1000000000)continue;
				sum+=dp[i][j];
			}
			if(sum==0)continue;
			
			if(ans>sum){
				minp=i;
				ans = sum;
			}
		}
		printf("%d %d\n",minp,ans);
	}
}