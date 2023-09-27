#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
int n;
int dp[5000001];
int dp2[5000001];

int func(int v){
	if(dp[v]!=11451419)return dp[v];
	if(v==0)return 0;
	int cnt=11451419;
	int j=1;
	while(j*(j+1)*(j+2)/6<=v)j++;
	j--;
	for(int i=j;i>=1;i--){
		cnt=min(cnt,func(v-i*(i+1)*(i+2)/6));
	}
	return (dp[v]=cnt+1);
}

int func2(int v){
	if(dp2[v]!=11451419)return dp2[v];
	if(v==0)return 0;
	int cnt=11451419;
	int j=1;
	while(j*(j+1)*(j+2)/6<=v)j++;
	j--;
	for(int i=j;i>=1;i--){
		if((i*(i+1)*(i+2)/6)%2!=1)continue;
		cnt=min(cnt,func2(v-i*(i+1)*(i+2)/6));
	}
	return (dp2[v]=cnt+1);
}

int main(void){
	for(int i=1;i<=2000000;i++)dp[i]=dp2[i]=11451419;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		printf("%d %d\n",func(n),func2(n));
	}
	return 0;
}