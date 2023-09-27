#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;
const int max_n = 10000+2;
long long cnt[111];
long long m,n,a=0,b,W;
const int INF = 1e9+1;
const int mod = 1e9 + 7;
string s1,s2;
long dist[max_n],s[max_n],w[max_n],v[max_n];
long long dp[max_n][max_n];
vector<vector<int> > G;
bool isprime(long long xx){
    if(xx == 2) return true;
    if(xx % 2==0 || xx<2)    return false;
    long long ii = 3;
    while(ii*ii <= xx){
        if(xx %ii == 0) return false;
        ii += 2;
    }
    return true;
}
long long gcd(long long xx, long long yy){
    if(yy == 0) return xx;
    long long k = xx/yy;
    long long c = xx - k*yy;
    return gcd(yy, c);
}
void solve(){
    for(int i=1 ; i<=s1.size() ; i++){
        dp[i][0] = i;
    }
    for(int j=1 ; j<=s2.size() ; j++){
        dp[0][j] = j;
    }
    for(int i=1 ; i<=s1.size() ; i++){
        for(int j=1 ; j<=s2.size() ; j++){
            long long x = min(dp[i-1][j]+1, dp[i][j-1]+1);
            if(s1[i-1] == s2[j-1]){
                x = min(x,dp[i-1][j-1]);
                dp[i][j] = x;
            }else{
                x = min(x, dp[i-1][j-1]+1);
                dp[i][j] = x;
            }
        }
    }
    cout << dp[s1.size()][s2.size()] << endl;
}
int main(){
    cin >> s1 >> s2;
    solve();
    return 0;
}
