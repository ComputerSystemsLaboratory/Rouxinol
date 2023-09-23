#include<iostream>

using namespace std;

typedef long long ll;

int main(){
	ll dp[100][21]={};
	int data[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>data[i];
	dp[0][data[0]]=1;
	for(int i=1;i<n-1;i++){
		for(int num=0;num<21;num++){
			if(num+data[i]<=20&&num-data[i]>=0){
				dp[i][num]=dp[i-1][num+data[i]]+dp[i-1][num-data[i]];
			}
			else if(num+data[i]<=20){
				dp[i][num]=dp[i-1][num+data[i]];
			}
			else if(num-data[i]>=0){
				dp[i][num]=dp[i-1][num-data[i]];
			}
		}
	}
	cout<<dp[n-2][data[n-1]]<<endl;
	return 0;
}