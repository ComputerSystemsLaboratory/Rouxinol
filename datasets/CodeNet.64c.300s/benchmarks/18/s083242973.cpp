#include <iostream>
int main(void){
	long long int dp[30];
	dp[0]=1;
	dp[1]=2;
	dp[2]=4;
	for(int i=3;i<30;i++){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	int n;
	while(1){
		std::cin>>n;
		if(n==0){
			break;
		}else {
			std::cout<<dp[n-1]/3650+1<<std::endl;
		}
	}
	return 0;
}