#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;

int dp[16][16];

int main(){
	int a,b,n;
	while(scanf("%d%d",&a,&b)&&a!=0&&b!=0){
		scanf("%d",&n);
		for(int i=0;i<16;i++) for(int j=0;j<16;j++) dp[i][j]=0;
		for(int i=0;i<n;i++){
			int x,y; scanf("%d%d",&x,&y);
			dp[x-1][y-1]=-1;
		}
		dp[0][0]=1;
		for(int i=0;i<a;i++) for(int j=0;j<b;j++){
			if(dp[i][j]==-1) dp[i][j]=0;
			else dp[i][j]+=((i==0?0:dp[i-1][j])+(j==0?0:dp[i][j-1]));
		}
		printf("%d\n",dp[a-1][b-1]);
	}
}