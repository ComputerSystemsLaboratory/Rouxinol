#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << '\n';
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const int MOD = (int)1e9 + 7;

string s, t;
int dp[1001][1001];

int main(void){
    cin >> s >> t;
    int ls = s.size(), lt = t.size();

    for(int i = 0; i <= ls; i++) dp[i][0] = i;
    for(int i = 0; i <= lt; i++) dp[0][i] = i;

    for(int i = 0; i < ls; i++){
        for(int j = 0; j < lt; j++){
            if(s[i] == t[j]) dp[i+1][j+1] = dp[i][j];
            else dp[i+1][j+1] = dp[i][j] + 1;
            dp[i+1][j+1] = min(dp[i+1][j+1], min(dp[i][j+1] + 1, dp[i+1][j] + 1));
            // printf("dp(%d, %d) = %d\n", i+1, j+1, dp[i+1][j+1]);
        }
    }

    cout << dp[ls][lt] << '\n';

    return 0;
}
