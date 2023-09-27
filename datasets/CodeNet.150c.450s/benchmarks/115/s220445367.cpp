#include <iostream>
#include <string>
#include <ios>
#include <algorithm>
using namespace std;

int dp[1001][1001] = {{0}};

int LCS(string X, string Y){
    auto len_x = X.length();
    auto len_y = Y.length();
    for (int i = 0; i != len_x; ++i){
        for (int j = 0; j != len_y; ++j){
            if (X[i] == Y[j]){
                dp[i + 1][j + 1] = dp[i][j] + 1;
            }else{
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }
    return dp[len_x][len_y];
}

int main()
{
    ios::sync_with_stdio(false);
    
    int q = 0;
    cin >> q;
    
    string X;
    string Y;
    while (q--){
        cin >> X;
        cin >> Y;
        cout << LCS(X, Y) << endl;
    }
    return 0;
}