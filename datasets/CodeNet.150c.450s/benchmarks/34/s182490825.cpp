#include<iostream>
#include<vector>
#include<cstdio>
#include<map>
#include<queue>

using namespace std;

int main(void){
	int n;
	int a;
	long long int dp[31];
	for(a=0;a<=30;a++){
		dp[a]=0;
	}
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(a=4;a<=30;a++)dp[a]=dp[a-1]+dp[a-2]+dp[a-3];
	while(1){
		cin >> n;
		if(n==0)break;
		cout << (dp[n]+3649)/3650 << endl;
	}
	return 0;
}