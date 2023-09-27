#include<iostream>
#include<string>
using namespace std;
long long dp[30];
int main(){
	int n;
	while(true){
	cin>>n;
	if(n==0)
		break;
	for(int i=0;i<n;i++)
		dp[i]=0;
	dp[0]=1;
	dp[1]=2;
	dp[2]=4;
	for(int i=3;i<n;i++){
		dp[i]+=dp[i-3]+dp[i-2]+dp[i-1];
	}
	cout<<(dp[n-1]/3650)+1<<endl;
	}
    return 0;
}
 