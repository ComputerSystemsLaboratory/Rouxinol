#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
bool used[5];
long long int dp[105][25];
int main(void){
	int N,want,hoge;
	vector<int> nums;
	cin>>N;
	nums.push_back(0);
	for(int i=0;i<N-1;i++){
		cin>>hoge;
		nums.push_back(hoge);
	}
	cin>>want;
	for(int i=0;i<=20;i++){
		if(i!=0)dp[0][i]=0;
		else dp[0][0]=1;
	}
	for(int i=1;i<N;i++){
		for(int j=0;j<=20;j++){
			if(j-nums[i]>=0)
			dp[i][j]+=dp[i-1][j-nums[i]];
			if(j+nums[i]<=20)
			dp[i][j]+=dp[i-1][j+nums[i]];
		}
	}
	if(nums[1]!=0)
	cout<<dp[N-1][want]<<endl;
	else
	cout<<dp[N-1][want]/2<<endl;
	
}