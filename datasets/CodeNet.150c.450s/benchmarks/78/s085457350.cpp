#include<bits/stdc++.h>
using namespace std;

int dp[1000000],kisuu[1000000];
int main(){
    fill(dp,dp+1000000,1<<29);
    fill(kisuu,kisuu+1000000,1<<29);
    dp[0]=0;
    kisuu[0]=0;
    for(int i=1;i<500;i++){
	int s=i*(i+1)*(i+2)/6;
	    for(int j=s;j<1000000;j++){
	    dp[j]=min(dp[j],dp[j-s]+1);
	    }
	    if((s&1)==0)continue;
	    for(int j=s;j<1000000;j++){
	    kisuu[j]=min(kisuu[j],kisuu[j-s]+1);
	    }
	}
	int k;
	while(cin>>k,k){
	    cout<<dp[k]<<" "<<kisuu[k]<<endl;
	    }
    }