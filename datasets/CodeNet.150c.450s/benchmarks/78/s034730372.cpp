#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

int dp[2][1000000];
int data[200];

void init(){
	for(int i=1; i<200; i++)data[i-1]=i*(i+1)*(i+2)/6;
	dp[0][0]=dp[1][0]=0;
	REP(i,1,1000000){
		dp[0][i] = dp[1][i] = i;
		for(int j=0; j<199 && i-data[j]>=0; j++){
			dp[0][i] = min(dp[0][i], dp[0][i-data[j]]+1);
			if( data[j]%2 ){
				dp[1][i] = min(dp[1][i], dp[1][i-data[j]]+1);
			}
		}
	}
}

int main(){
	int n;
	init();
	while(scanf("%d",&n),n){
		printf("%d %d\n",dp[0][n],dp[1][n]);
	}
	return 0;
}