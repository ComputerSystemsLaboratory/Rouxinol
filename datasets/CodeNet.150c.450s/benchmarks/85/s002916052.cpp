/*
    Problem 46
    https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_B
*/
#include <bits/stdc++.h>
using namespace std;
/* typedef */
typedef long long ll;
typedef pair<int, int> pii;
/* constant */
const int INF = 1 << 30;
const ll LINF = 1LL << 50;
const int NIL = -1;
const int MAX = 10000;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* class */
class Matrix {
public:
    int r, c;
    Matrix () {}
    Matrix (int r, int c) : r(r), c(c) {}
};
/* global variables */
/* function */
/* main */
int main(){
    int n;
    cin >> n;
    vector<Matrix> M(n, Matrix());
    for (int i = 0; i < n; i++) {
        int r, c;
        cin >> r >> c;
        Matrix m = Matrix(r, c);
        M[i] = m;
    }

    // init dp
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j) dp[i][j] = 0;
            else dp[i][j] = INF;
    // calc
    // ex) M0 * M1 * M2
    // w=1 , M0*M1, M1*M2
    // w=2 , M0*M1*M2 = min{M0*(M1*M2),  (M0*M1)*M2)}
    //   | 0 | 1 | 2
    // 0 | 0 |w=1|w=2
    // 1 |   | 0 |w=1
    // 2 |   |   | 0
    for (int w = 1; w < n; w++) {  // w+1個の連続したMatrixの積, w個の選択肢
        for (int i = 0; i < n-w; i++) {  // start位置 Mi * Mi+1 * ... * Mi+w
            int j = i + w;  // end位置 Mi * Mi+1 * ... * Mj
            for (int k = i; k < j; k++) {
                int cost = M[i].r * M[k].c * M[j].c;
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + cost);
            }
        }
    }

    cout << dp[0][n-1] << '\n';
}
