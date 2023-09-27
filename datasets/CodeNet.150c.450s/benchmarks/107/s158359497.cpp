#include <cmath>
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <tuple>
#include <bitset>
#include <algorithm>
#include <utility>
#include <iomanip>

#define int long long int
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int INF = 1e15;
const int MOD = 1e9+7;

int levenshtein(string s, string t){
    int lenS = s.length();
    int lenT = t.length();
    vector<vector<int>> dp(lenS+1, vector<int>(lenT+1));
    rep(i, lenS+1){
        dp[i][0] = i;
    }
    rep(i, lenT+1){
        dp[0][i] = i;
    }

    rep(i, lenS){
        rep(j, lenT){
            dp[i+1][j+1] = min(dp[i+1][j]+1, dp[i][j+1]+1);
            int c = s[i] == t[j] ? 0 : 1;
            dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + c);
        }
    }

    return dp[lenS][lenT];
}

signed main(){
    string s1, s2;
    cin >> s1 >> s2;

    cout << levenshtein(s1, s2) << endl;

    return 0;
}

