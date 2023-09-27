#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int N=1e6;
int dp[1000010];
int dp2[1000010];
int move[200];
int main(){
	for(int i=0;i<1000010;i++)	dp[i]=dp2[i]=i;
	for(int i=2;;i++){
		int add=i*(i+1)*(i+2)/6;
		if(add>N)	break;
		for(int j=add;j<=N;j++)	dp[j]=min(dp[j],dp[j-add]+1);
		if(add&1)	for(int j=add;j<=N;j++){
			dp2[j]=min(dp2[j],dp2[j-add]+1);
		}
	}
	while(true){
		int n;	cin>>n;
		if(n==0)	break;
		cout<<dp[n]<<" "<<dp2[n]<<endl;
	}
	return 0;
}