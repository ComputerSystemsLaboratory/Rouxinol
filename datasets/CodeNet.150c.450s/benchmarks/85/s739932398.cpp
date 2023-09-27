#include <bits/stdc++.h>
using namespace std;

#define N 101

vector<vector<int> > dp(N, vector<int>(N));
int p[N+1];

// dp[i][j] := [Mi, Mj]におけるminimum number of scalar multiplications 

int main(){
    
    int n;
    cin >> n;
    
    for (int i = 1; i < n+1; i++) cin >> p[i-1] >> p[i];
    
    
    // l はchain lengthを表す変数である.
    // l == 1のとき計算回数は0である.
    for (int l = 2; l <= n; l++){
        
        // 変数iは区間の左端を表す
        // 左端が動ける範囲の上限は, n - l + 1である
        // 具体例を考えてみよ
        for (int i = 1; i <= n-l+1; i++){
            
            // jは右端の上限値を表す
            int j = i + l - 1;
            
            dp[i][j] = (1<<20);
            
            // 今回調べる区間は, [i, j-1]
            for (int k = i; k < j; k++){
                
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1] * p[k] * p[j]);
            }
        }
    }
    
    cout << dp[1][n] << endl;
}

