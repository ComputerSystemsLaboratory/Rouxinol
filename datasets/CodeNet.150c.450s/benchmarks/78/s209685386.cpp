#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<((int)(n));i++)
#define reg(i,a,b) for(int i=((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=((int)(b));i>=((int)(a));i--)
typedef long long int lli;
typedef pair<int,int> mp;
#define fir first
#define sec second
#define IINF INT_MAX
#define LINF LLONG_MAX

int inf = 1000005;

int ok[1000010]={};
int dp[1000010]={};
int dp2[1000010]={};

int main(void){
	
	reg(i,1,1000){
		int no=(i*(i+1)*(i+2))/6;
		if(no>inf)break;
		ok[no]=1;
	}
	
	rep(i,inf)dp[i]=dp2[i]=inf;
	
	rep(i,inf){
		if(!ok[i])continue;
		//printf("ok! %d\n",i);
		dp[i]=1;
		rep(j,inf){
			int to=i+j;
			if(to>inf)continue;
			dp[to]=min(dp[to],dp[j]+1);
		}
	}
	
	rep(i,inf){
		if(!ok[i] || i%2==0)continue;
		//printf("ok! %d\n",i);
		dp2[i]=1;
		rep(j,inf){
			int to=i+j;
			if(to>inf)continue;
			dp2[to]=min(dp2[to],dp2[j]+1);
		}
	}
	
	
	for(;;){
		int p;
		scanf("%d",&p);
		if(!p)break;
		printf("%d %d\n",dp[p],dp2[p]);
	}
		
	return 0;
}