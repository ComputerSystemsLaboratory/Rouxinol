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
#define INF 99999999
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
    int N,W;
    cin >> N >> W;
    int v[N];
    int w[N];
    
    REP(i,N)cin >> v[i] >> w[i];
    
    int dp[W+1];    // ?????§?????????
    int ret = 0;
    REP(i,W+1)dp[i]=0;
    
    REP(i,N){
        int this_v = v[i];
        int this_w = w[i];
        RREP(j,W+1-this_w){
            dp[j+this_w] = max( dp[j] + this_v ,dp[j+this_w]);
            debug(j+this_w);
            debug(dp[j+this_w]);
        }
    }
    
    REP(i,W+1){
        ret=max(ret,dp[i]);
    }
    
    cout << ret << endl;
    
    return 0;
}