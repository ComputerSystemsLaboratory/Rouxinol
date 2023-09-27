//Matrix Chain Multiplication
#include <iostream>
#include <climits>

using namespace std;

int matrixChainMultiplication(int p[], int n) {
    int dp[n+1][n+1];
    for(int i = 0; i < n + 1; i++) dp[i][i] = 0;
    for(int l=2; l<n+1; l++) {
        for(int i=1; i<n-l+2; i++) {
            int j = i+l-1;
            dp[i][j] = INT_MAX;
            for(int k=i+1; k<j+1; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k-1] + dp[k][j] + p[i - 1] * p[k - 1] * p[j]);
            }
        }
    }
    return dp[1][n];
}

int main() {
    int n, r, c;
    cin >> n;
    int p[n+1];
    for(int i=0; i<n; i++) {
        cin >> r >>  c;
        if(i == 0) p[0] = r;
        p[i+1] = c;
    }

    cout << matrixChainMultiplication(p, n) << endl;
}

