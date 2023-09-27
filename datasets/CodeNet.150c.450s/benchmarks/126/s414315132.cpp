#include<iostream>
#include<algorithm>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int dp[17][17];
int main(){
	int w,h,n,x,y;
	while(true){
	cin>>w>>h;
	if(!w&&!h)break;
	cin>>n;
	rep(i,h)rep(j,w)dp[i][j]=1;
	rep(i,n){cin>>x>>y;dp[y-1][x-1]=0;}
	dp[0][0]=2;
	rep(i,h){
		rep(j,w){
			if(dp[i][j]){
				if(i)dp[i][j]+=dp[i-1][j];
				if(j)dp[i][j]+=dp[i][j-1];
				dp[i][j]--;
			}
		}
	}
	cout<<dp[h-1][w-1]<<endl;
	}
	return 0;
}