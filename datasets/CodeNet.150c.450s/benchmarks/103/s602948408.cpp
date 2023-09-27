#include <iostream>
#include <algorithm>
using namespace std;

int po10[]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};

int n,s;
int dp[20][110];
int main(){
	dp[0][0]=dp[1][0]=1;
	for(int i=1;i<=9;i++){
		for(int j=9;j>=1;j--){
			for(int k=100;k>=i;k--){
				dp[j][k]+=dp[j-1][k-i];
			}
		}
	}
	while(true){
		int res=0;
		cin>>n>>s;
		if(n==0&&s==0) break;
		cout<<dp[n][s]<<endl;
	}
	return 0;
}