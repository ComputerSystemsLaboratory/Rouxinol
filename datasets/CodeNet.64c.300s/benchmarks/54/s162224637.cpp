#include<cstdio>
#include<cstring>
int num[100];
long long table[100][21];
int dp[100][21];
int N;
long long solve(int m,int n){
	if(dp[m][n])return table[m][n];
	long long res=0;
	if(m==N-1){
		if(n==num[N-1]) return table[m][n]=1;
		else return table[m][n]=0;
	}
	if(n+num[m]<=20) res+=solve(m+1,n+num[m]);
	if(n-num[m]>=0) res+=solve(m+1,n-num[m]);
	dp[m][n] = 1;
	return table[m][n]=res;
}

int main(){
	memset(dp, 0, sizeof(dp));
	
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",num+i);
	printf("%lld\n",solve(1,num[0]));
	return 0;
}