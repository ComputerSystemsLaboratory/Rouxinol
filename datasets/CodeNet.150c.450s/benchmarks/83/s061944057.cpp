#include <stdio.h>
#include <algorithm>
using namespace std;
const int MAX_N=100;
const int MAX_W=10000;
int n,W;
int dp[MAX_N+1][MAX_W+1];
int v[MAX_N];
int w[MAX_N];
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
	scanf("%d%d",&n,&W);
	for(int i=0;i<n;i++){
		scanf("%d%d",&v[i],&w[i]);
	}
	for(int i=0;i<=MAX_N;i++){
		for(int j=0;j<=MAX_W;j++){
			dp[i][j]=-1;
		}
	}
	printf("%d\n",rec(0,W));
	return 0;

}