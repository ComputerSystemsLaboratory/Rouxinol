#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctime>


#ifndef _USEFUL_MACROS_
#define _USEFUL_MACROS_
#define INF (99999999/3)
#define N_PRIME 1000000007
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
//#define OUTPUT_DEBUG
#ifdef OUTPUT_DEBUG
#define debug(x) cout<<#x<<": "<<x<<endl
#else
#define debug(x) do{}while(false)
#endif
#endif 

using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    vector<int> c(m);
    vector<int> dp(n+1);
    
    REP(i,m) cin >> c[i];
    
    sort(c.begin(),c.end());
    REP(i,n+1)dp[i] = INF;
    
    dp[0] = 0;
    dp[1] = 1;
    
    REP(i,m){
        FOR(j,1,n+1){
            int index = j - c[i];
            if( index < 0 )continue;
            
            dp[j] = min(dp[index]+1,dp[j]);
        }
    }
    debug(c[0]);
    REP(i,n+1)
        debug(dp[i]);
    
    cout << dp[n] << endl;
    
    return 0;
}