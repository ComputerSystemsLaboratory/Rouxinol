#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)

int n,m;
long long dp[2][21];

int main(){	
	int data[100];
	
	scanf("%d",&n);
	rep(i,n-1)scanf("%d",&data[i]);
	scanf("%d",&m);
	
	dp[1][data[0]] = 1;
	REP(i,1,n-1){
		int cur = i%2;
		int next = (i+1)%2;
		rep(j,21){
			if( j+data[i]<=20 ){
				dp[next][j+data[i]] += dp[cur][j];
				//printf("i:%d  , +: %d  :  %lld\n",i,j+data[i],dp[next][j+data[i]]);
			}
			if( j-data[i]>=0 ){
				dp[next][j-data[i]] += dp[cur][j];
				//printf("i:%d  , -: %d  :  %lld\n",i,j-data[i],dp[next][j-data[i]]);
			}
		}
		rep(j,21)dp[cur][j]=0;
	}
	printf("%lld\n",dp[(n-1)%2][m]);
	return 0;
}