#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000007;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.size(), l2 = s2.size();
    int dp[1001][1001];
    for(int i = 0; i <= l1; i++){
        fill(dp[i], dp[i] + l2 + 1, INF);
    }
    for(int i = 0; i <= l2; i++){
        dp[0][i] = i;
    }
    for(int i = 0; i <= l1; i++){
        dp[i][0] = i;
    }
    for(int i = 1; i <= l1; i++){
        for(int j = 1; j <= l2; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = min(min(dp[i][j-1] + 1,
                                   dp[i-1][j] + 1),
                               dp[i-1][j-1] + 1);
            }
        }
    }
    printf("%d\n", dp[l1][l2]);
    return 0;
}