#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1000000000;

int solve(const int n, const int c, const vector<int>& v) {
    vector<int> dp(c + 1, INF);
    dp[0] = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= c; j++) {
            if (j >= v[i] && dp[j - v[i]] != INF) {
                dp[j] = min(dp[j], dp[j - v[i]] + 1);
            } 
        }
    }
    
    return dp[c];  
}


int main() {
    int n, c;
    cin >> c >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = solve(n, c, v);
    cout << ans << endl;
}