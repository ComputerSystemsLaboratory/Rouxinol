#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

using namespace std;
int dp[1001][1001];
//?????????????????????
int n;
string x,y;
void solve(){
	cin >> n;
	REP(j,n){
	cin >> x >> y;
	memset(dp,0,1001*1001);
	int xn = x.size();
	int yn = y.size();
	REP(jj,xn+1){
		 REP(ii,yn+1){
			 if(jj <= 0 || ii <= 0){
				 dp[jj][ii] = 0 ;
			 }
			 else if(x[jj-1]==y[ii-1]) {
				 dp[jj][ii] = 1 + dp[jj-1][ii-1];
			 }
			 else{
				 dp[jj][ii] = max ( dp[jj-1][ii], dp[jj][ii-1] );
		   }
			 //cout << '('<<ii<<','<<jj<<')'<<dp[jj][ii]<<endl;
		 }

	}
	cout << dp[xn][yn]<<endl;
	}


}


int main(){
solve();
}