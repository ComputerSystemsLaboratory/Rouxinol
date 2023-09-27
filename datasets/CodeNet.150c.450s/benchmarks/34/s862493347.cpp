#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		int dp[35][35]={};
		dp[1][1]=1;
		dp[1][2]=1;
		dp[1][3]=1;
		
		for(int i=1;i<30;i++){
			for(int j=1;j<n;j++){
				dp[i+1][j+1]+=dp[i][j];
				dp[i+1][j+2]+=dp[i][j];
				dp[i+1][j+3]+=dp[i][j];
				}
			}
			
			long long a=0;
			for(int i=0;i<=30;i++){
				a+=dp[i][n];
				}
				
				cout<<(((a+9)/10)+364)/365<<endl;
		
		}
		return 0;
	}