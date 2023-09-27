#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<climits>
using namespace std;
#define rep(i, j) for(int i = 0; i < j; i++)
#define f(i, k, j) for(int i = k; i < j; i++)
#define P pair<int, int>
const int INF = 1000010;

int n, dp[INF], dp2[INF];
vector<int> c, ctmp;

void solve(){
    for(int i = 2; ; i++){
        int tmp = (i * (i + 1) * (i + 2)) / 6;
        if(tmp >= INF) break;
        else{
            c.push_back(tmp);
            if(tmp % 2 == 1) ctmp.push_back(tmp);
        }
    }
    rep(i, INF){
        dp[i] = i;
        dp2[i] = i;
    }

    rep(i, c.size()){
        for(int j = c[i]; j < INF; j++){
            dp[j] = min(dp[j], dp[j - c[i]] + 1);
        }
    }
    rep(i, ctmp.size()){
        for(int j = ctmp[i]; j < INF; j++){
            dp2[j] = min(dp2[j], dp2[j - ctmp[i]] + 1);
        }
    }
}

int main(){
    solve();
    while(cin >>n && n){
        cout <<dp[n] <<" " <<dp2[n] <<endl;
    }
    return 0;
}