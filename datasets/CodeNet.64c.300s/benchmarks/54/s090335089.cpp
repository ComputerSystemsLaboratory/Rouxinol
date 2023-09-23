#include<iostream>
int main(){
	int a;
	long long int dp[101][101]={0};
	int x[101];
	std::cin>>a;
	for(int i=1; i<=a; i++)std::cin>>x[i];
	dp[1][x[1]]=1;
	
	for(int j=2; j<a; j++){
		for(int s=0; s<=20; s++){
			if(s+x[j]<=20 && s-x[j]>=0){
				dp[j][s]=dp[j-1][s-x[j]]+dp[j-1][s+x[j]];
			}
			else if(s+x[j]<=20 && s-x[j]<0){
				dp[j][s]=dp[j-1][s+x[j]];
			}
			else if(s+x[j]>20 && s-x[j]>=0){
				dp[j][s]=dp[j-1][s-x[j]];
			}
		}
	}
	std::cout<<dp[a-1][x[a]]<<std::endl;
	
	
	
	return 0;
}