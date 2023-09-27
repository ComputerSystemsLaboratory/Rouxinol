#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 1000000000
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
using namespace std;


long long dp[101][101];
int s[101][101];
void order(int i,int j){
    int k;
    if(i==j) printf("A%d",i);
    else{
        k=s[i][j];
        printf("(");
        order(i,k);
        order(k+1,j);
        printf(")");
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, n1; cin >> n; n1 = n;
    vi dim;
//    dim.push_back(0);
    int r, c;
    cin >> r >> c;
    dim.push_back(r);
    dim.push_back(c);
    n1--;
    while(n1--){
        cin >> r >> c;
        dim.push_back(c);
    }
    n++;
    for (int i = 0; i < n; ++i) {
        dp[i][i] = 0;
    }
    long long cost = 0;
//    n = dim.size() - 1;
    long long mincost = -MAXN;
    for (int len = 2; len < n; ++len) {
        for (int i = 1; i < n - len + 1; ++i) {
            int j = i + len - 1;
            dp[i][j] = MAXN;
            for (int k = i; k < j; ++k) {
                cost = dp[i][k] + dp[k + 1][j] + dim[i - 1] * dim[j] * dim[k];
                if(cost < dp[i][j]){
                    mincost = cost;
                    dp[i][j] = cost;
                    s[i][j] = k;
                }
            }
        }
    }
//    for (int l = 0; l <= n; ++l) {
//        for (int i = 0; i <= n; ++i) {
//            cout << dp[l][i] << " ";
//        }
//        cout << endl;
//    }
//    printf("Minimum Multiplication : %Ld\n",dp[1][n]);
//    printf("Order : ");
//    order(1,n);
//    printf("\n\n");
    cout << dp[1][n - 1] << endl;
//    cout << dp[2][n] << endl;
    return 0;
}
