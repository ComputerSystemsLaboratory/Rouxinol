#include<iostream>
using namespace std;

int main(){
while(1){
	int a,b,n,x,y,dp[18][18];
	bool c[18][18];
	for(int i=0;i<18;i++)for(int j=0;j<18;j++){dp[i][j]=0; c[i][j]=true;}
	scanf("%d%d",&a,&b);
if(a==0&&b==0)break;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		c[x][y]=false;
	}
	dp[1][1]=1;
	for(int i=1;i<a+1;i++)for(int j=1;j<b+1;j++){
		if(c[i][j]&&!(i==1&&j==1)){
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	printf("%d\n",dp[a][b]);
}
}