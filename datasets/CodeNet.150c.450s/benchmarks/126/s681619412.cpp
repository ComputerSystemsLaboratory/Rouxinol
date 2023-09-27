#include <iostream>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<map>
#include<cstdio>
#include<fstream>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

#define mp make_pair
#define P pair<int,int>
#define ll __int64

int n,m,r;
int x[1000],y[1000];
int dp[1000][1000];

int main(){

while(cin>>m>>n,m||n){//mは横、nは縦
	rep(i,1000)rep(j,1000)dp[i][j]=0;
	rep(i,1000)x[i]=y[i]=0;	
	//m--;n--;
	
	cin>>r;
	rep(i,r){
	cin>>x[i]>>y[i];
	x[i]--;
	y[i]--;
	}

	dp[0][0]=1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i+j==0)continue;
			bool f=1;
			for(int k=0;k<r;k++)if(x[k]==i&&y[k]==j)f=0;
			if(!f)continue;
			if(i==0)dp[i][j]+=dp[i][j-1];
			else if(j==0)dp[i][j]+=dp[i-1][j];
			else dp[i][j]+=dp[i-1][j]+dp[i][j-1];
		}
	}
	cout<<dp[m-1][n-1]<<endl;
}	
	return 0;
}
