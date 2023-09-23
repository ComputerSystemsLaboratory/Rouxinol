#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	int dp[31],n;
	dp[1]=1;dp[2]=2;dp[3]=4;
	r(i,4,31)dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	while(cin>>n,n){
		n=dp[n]/3650;
		if(!n)n=1;
		else n++;
		cout<<n<<endl;
	}
}