#include<iostream>
#include<algorithm>
using namespace std;
long long dp[110][110];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) dp[i][j]=0;
			else dp[i][j]=100861008610086;
		}
	}
	for(int i=0;i<m;i++){
		long long a,b,c;
		cin>>a>>b>>c;
		dp[a][b]=c;
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(dp[i][k]!=100861008610086&&dp[k][j]!=100861008610086) dp[i][j]=min(dp[i][k]+dp[k][j],dp[i][j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(dp[i][i]<0){
			cout<<"NEGATIVE CYCLE\n";
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(dp[i][j]>=100861008610086) cout<<"INF";
			else cout<<dp[i][j];
			if(j<n-1) cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}