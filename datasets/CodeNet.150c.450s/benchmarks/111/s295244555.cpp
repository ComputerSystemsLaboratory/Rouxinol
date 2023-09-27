#include <iostream>
int main(void){
	long long int dp[100][21];
	int value[100];
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>value[i];
	}
	for(int i=0;i<100;i++){
		for(int j=0;j<21;j++){
			dp[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<21;j++){
			if(i==0){
				dp[i][value[i]]=1;
			}else {
				if(j+value[i]<=20 && j+value[i]>=0){
					dp[i][j]+=dp[i-1][j+value[i]];
				}
				if(j-value[i]<=20 && j-value[i]>=0){
					dp[i][j]+=dp[i-1][j-value[i]];
				}
			}
		}
	}
/*	for(int i=0;i<n;i++){
		for(int j=0;j<21;j++){
			std::cout<<dp[i][j]<<" ";
		}
		std::cout<<std::endl;
	}*/
	std::cout<<dp[n-2][value[n-1]]<<std::endl;
	return 0;
}