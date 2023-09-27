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
int dp[1001][1001];//dp[y][x];
//??????????????????
string x,y;
void solve(){
		cin >> x >> y ;
		memset(dp,10000,1001*1001);
		REP(i,x.size()+1){
			  dp[0][i] = i;
		}
		REP(i,y.size()+1){
			  dp[i][0] = i;
		}
		FOR(i,1,x.size()+1){
			FOR(j,1,y.size()+1){
				if(x[i-1]==y[j-1]){
					dp[j][i] = dp[j-1][i-1];
				}
				else {
					dp[j][i] = min ( 1 + min(dp[j-1][i],dp[j][i-1]),dp[j-1][i-1]+1);
				}

			}
		}
		/*REP(i,y.size()+1){
			REP(j,x.size()+1){
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}
		*/
		cout << dp[y.size()][x.size()] << endl;
}


int main(){
solve();
}