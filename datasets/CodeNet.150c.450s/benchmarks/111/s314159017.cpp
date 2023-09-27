#include<iostream>

long long dp[100][21];

int main(){
	int n;
	std::cin>>n;
	int data[100];
	for(int i=0;i<n;i++){
		std::cin>>data[i];
	}
	dp[0][data[0]]=1;
	for(int i=1;i<n-1;i++){
		for(int j=0;j<=20;j++){
			if(j+data[i]<=20)dp[i][j]+=dp[i-1][j+data[i]];
			if(j-data[i]>=0)dp[i][j]+=dp[i-1][j-data[i]];
		}
	}
	std::cout<<dp[n-2][data[n-1]]<<std::endl;
	return 0;
}