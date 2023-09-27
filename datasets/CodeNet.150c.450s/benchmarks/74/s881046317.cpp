#include<iostream>
#include<string.h>
using namespace std;

#define MAX_N 1000000

int main(){
	int dp[MAX_N];
	int n,m,c[100];

	memset(dp,-1,sizeof(dp));

	cin>>n>>m;

	for(int i=1;i<=m;i++){
		cin>>c[i];
	}

	for(int i=1;i<=m;i++){
		dp[c[i]]=1;
	}

	for(int i=1;i<=20;i++){
		for(int j=1;j<=n;j++){
			if(dp[j]!=-1){
				for(int k=1;k<=m;k++){
					if(dp[j+c[k]]==-1 || dp[j+c[k]] > dp[j]+1){
						dp[j+c[k]] = dp[j] + 1;
					}
				}
			}
		}
	}

	cout<<dp[n]<<endl;

	return 0;
}