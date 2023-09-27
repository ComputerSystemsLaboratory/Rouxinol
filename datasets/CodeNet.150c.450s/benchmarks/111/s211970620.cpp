#include<cstdio>
#include<iostream>

using namespace std;


int main(void){

	int n;
	int inp;
	long long dp[2][21]={0};

	cin>>n;

	cin>>inp;
	dp[0][inp]=1;

	for(int i=0;i<n-2;i++){
		cin>>inp;

		for(int j=0;j<=20;j++) dp[1][j]=0;

		for(int j=0;j<=20;j++){
			if(dp[0][j]>0){
				if(j+inp<=20){
					dp[1][j+inp]+=dp[0][j];
				}
				if(j-inp>=0){
					dp[1][j-inp]+=dp[0][j];
				}
			}
		}
		for(int j=0;j<=20;j++) dp[0][j]=dp[1][j];
	}
	cin>>inp;
	cout<<dp[0][inp]<<endl;


	return 0;
}