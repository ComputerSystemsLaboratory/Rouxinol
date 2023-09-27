#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int r, c;
    vector<pair<int, int>> v; 
    vector<int> dims; 
    for (int i = 0; i < n; ++i) { 
            cin >> r >> c; 
            if (i == 0) { 
                dims.push_back(r);
            } 
        dims.push_back(c);
    }
    // for (int i = 0; i < dims.size(); ++i)
    //     cout << dims[i] << " ";
    int dp[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            dp[i][j] = 0;
    
    for (int len = 2; len <= n; ++len) { 
        for (int i = 0; i <= n - len; ++i) { 
            int j = i + len-1;
            // cout << i << " " << j <<" -> ";
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; ++k) { 
                // cout << dp[i][k] << " " << dims[i] << " " << dims[k+1] << " " << dims[j+1] << endl;
               int q = dp[i][k] + dp[k+1][j] + dims[i]*dims[k+1]*dims[j+1]; 
               dp[i][j] = min(q, dp[i][j]);
            }
        }
    }
    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0;j < n; ++j)
    //         cout << dp[i][j] << " ";
    //     cout << endl;
    // }
    cout << dp[0][n-1] << endl;
   
}
