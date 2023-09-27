#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int dp[19][19];
bool b[19][19];
int main(){
	int y,x,n,p,o;
	while(cin>>x>>y,x){
		cin>>n;
		r(i,0,19)r(j,0,19)dp[i][j]=b[i][j]=0;
	while(n--){
		cin>>p>>o;
		b[o-1][p-1]=true;
	}
	r(i,0,y){if(!b[i][0])dp[i][0]=1;else break;}
	r(i,0,x){if(!b[0][i])dp[0][i]=1;else break;}
	r(i,1,y)r(j,1,x){
		if(b[i][j])continue;
		else dp[i][j]=dp[i-1][j]+dp[i][j-1];
	}
	cout<<dp[y-1][x-1]<<endl;
}
}