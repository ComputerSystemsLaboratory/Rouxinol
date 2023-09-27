#include <bits/stdc++.h>
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_map>
#include <map>
*/
#define INF 100000000
#define rep(i, a) for (int i = 0; i < (a); i++)
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    //dp[n+1][m+1] := sのn文字目までとtのm文字目までとのレーベンシュタイン距離
    int dp[1010][1010];

    int i, j;
    for(i = 0; i <= s.size(); i++){
        dp[i][0] = i;
    }
    for(i = 0; i <= t.size(); i++){
        dp[0][i] = i;
    }

    int x;
    for(i = 1; i <= s.size(); i++){
        for(j = 1; j <= t.size(); j++){
            if(s[i-1] == t[j-1]){
                x = 0;
            }else{
                x = 1;
            }

            dp[i][j] = min(dp[i-1][j] + 1, min(dp[i][j-1] + 1, dp[i-1][j-1] + x));
        }
    }

    cout << dp[s.size()][t.size()] << endl;
}


