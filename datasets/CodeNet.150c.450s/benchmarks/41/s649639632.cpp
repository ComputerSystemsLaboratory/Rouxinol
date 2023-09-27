#include <iostream>
#include <algorithm>
#define INF 99999999999
using namespace std;

typedef long long int lli;
int main(void){
	int n,m,a,b,c;
	cin>>n>>m;
	lli dp[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)dp[i][j]=0;
			else dp[i][j]=INF;
		}
	}

	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		dp[a][b]=c;
	}

	for(int k=0;k<n;k++){
		for(int u=0;u<n;u++){
			for(int v=0;v<n;v++){
				if(dp[u][k]!=INF&&dp[k][v]!=INF)dp[u][v]=min(dp[u][v],dp[u][k]+dp[k][v]);
				if(u==v&&dp[u][v]<0){
					cout<<"NEGATIVE CYCLE"<<endl;
					return 0;
				}
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j!=n-1){
				if(dp[i][j]!=INF)cout<<dp[i][j]<<" ";
				else cout<<"INF"<<" ";
			}
			else{
				if(dp[i][j]!=INF)cout<<dp[i][j];
				else cout<<"INF";
			}
		}
		cout<<endl;
	}

	return 0;
}