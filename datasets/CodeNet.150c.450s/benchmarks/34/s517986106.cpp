#include<stdio.h>
int dp[31];
int main(){
	int n;
	int i,j;
	while(1){
		scanf("%d",&n);
		if(n==0)return 0;
                for(i=0;i<=n;i++)dp[i]=0;
		dp[0]=1;
		for(i=0;i<n;i++){
			for(j=1;j<=3;j++){
				if(i+j<=n)dp[i+j]+=dp[i];
			}
		}
		int ans;
		if(dp[n]%10==0)ans=dp[n]/10;
		else ans=(int)dp[n]/10+1;
		if(ans%365==0)printf("%d\n",ans/365);
		else printf("%d\n",(int)ans/365+1);
	}
	return 0;
}