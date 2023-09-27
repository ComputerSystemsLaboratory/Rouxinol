#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<set>
#include<map>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#define INF 1000000

int main(){
	while(1){
		int n,m=0;
		cin>>n;
		if(n==0)break;
		
		int cost[10][10]={0};
		rep(i,10)rep(j,10)cost[i][j]=INF;
		
		rep(i,n){
			int a,b,c;
			cin>>a>>b>>c;
			cost[a][b]=c;
			cost[b][a]=c;
			
			m=max(max(a,b),m);
		}
		
		
		int dp[10][10][10]={0};
		
		rep(i,10){
			rep(j,10){
				dp[0][i][j] = cost[i][j];
				dp[0][i][j] = min( dp[0][i][j],  cost[i][0] + cost[0][j]);
			}
		}
		
		reps(k,1,10){
			rep(i,10){
				rep(j,10){
					dp[k][i][j] = min(dp[k-1][i][j], dp[k-1][i][k] + dp[k-1][k][j]);
				}
			}
		}
		
		
		int maxp = -1;
		int maxsum = INF;
		
		rep(i,m+1){
			int ssum = 0;
			rep(j,m+1){
				if(i==j)continue;
				ssum += dp[9][i][j];
			}
			
			if(maxsum > ssum){
				maxsum = ssum;
				maxp = i;
			}
		}
		
		printf("%d %d\n",maxp,maxsum);
	}
}