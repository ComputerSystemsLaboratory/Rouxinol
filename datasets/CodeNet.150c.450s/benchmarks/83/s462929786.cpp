#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

const int MAX_N=100;
const int MAX_W=10000;
int w[MAX_N];
int v[MAX_N];
int dp[MAX_N+1][MAX_W+1];
int n,W;

int rec(int i,int j){
	if(dp[i][j]>=0){
		return dp[i][j];
	}
	int res;
	if(i==n){
		res=0;
	}
	else if(j<w[i]){
		res=rec(i+1,j);
	}
	else{
		res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	}
	return dp[i][j]=res;
}
int main(){
	scanf("%d %d",&n,&W);
	for(int i=0;i<n;i++){
		scanf("%d %d",&v[i],&w[i]);
	}
	memset(dp,-1,sizeof(dp));
	printf("%d\n",rec(0,W));
	return 0;

}