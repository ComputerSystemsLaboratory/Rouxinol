#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
#define rep(i, j) for(int i = 0; i < j; i++)
#define f(i, k, j) for(int i = k; i < j; i++)
#define P pair<int, int>
const int INF = (1 << 26);
const int MAX_N = 31;
long long int dp[MAX_N];

void solve(){
    memset(dp, 0, sizeof(dp));
    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    for(int i = 4; i < MAX_N; i++){
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }
}

int main(){
    solve();
    int n;
    while(cin >>n && n != 0){
        int ans = dp[n] / 3650;
        if(dp[n] % 3650 != 0) ans++;
        cout <<ans <<endl;
    }
    return 0;
}