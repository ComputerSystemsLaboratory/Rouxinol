#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;

int dp[41];


int main(){
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    for(int j=0;j<30;j++){
	for(int i=1;i<=3;i++){
	    dp[i+j] += dp[j];
	}
    }
    while(true){
	int n;
	cin >> n;
	if(n == 0) break;
	int fact = dp[n]/10 + ((dp[n]%365==0) ? 0 : 1) ;
	cout << fact/365 + ((fact%365==0) ? 0 : 1) << endl;
    }
    return 0;
}