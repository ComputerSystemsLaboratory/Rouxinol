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

int dp[40];

int solve(int n){
	memset (dp, 0, sizeof(dp));
	
	dp[0] = 1;
	rep(i,n){
		dp[i+1] += dp[i];
		dp[i+2] += dp[i];
		dp[i+3] += dp[i];
	}
	return dp[n];
	
	}
	
int main(){
	while(true){
		int n=0;
		scanf("%d", &n);
		
		if(!n) break;
		
	
	
	
		printf("%d\n", (int)ceil((double) solve(n)/10/365));
		
	}
		return 0;
		
		
	}
		