#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int a[1001],ta[1001],tta[1001];
int dp[1000021],dp2[1000010];
const int INF=99999999;
int main(){
	a[1]=1,ta[1]=1,tta[1]=1;
	int cnt=1;
	for(int i=2;i<=1000;i++)a[i]=i+a[i-1];
	for(int i=2;i<=1000;i++){
	ta[i]=a[i]+ta[i-1];
	if(ta[i]%2==1)tta[++cnt]=ta[i];
	}

	fill(dp,dp+1000001,INF);
	fill(dp2,dp2+1000001,INF);
	dp[0]=0,dp2[0]=0;
	for(int i=1;i<=200;i++){
		for(int j=1;j<=1000000;j++){
		if(j>=ta[i])dp[j]=min(dp[j],dp[j-ta[i]]+1);
		}//
	}//endfor
	for(int i=1;i<=100;i++){
		for(int j=1;j<=1000000;j++){
		if(j>=tta[i])dp2[j]=min(dp2[j],dp2[j-tta[i]]+1);
		}
	}//endfor
	int n;
	while(true){
	cin>>n;
	if(n==0)break;
	cout<<dp[n]<<" "<<dp2[n]<<endl;
	}//endwhile
	return 0;
}