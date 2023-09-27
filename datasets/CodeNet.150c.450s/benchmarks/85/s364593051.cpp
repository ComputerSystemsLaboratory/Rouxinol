#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int dp[100][100];
int size[100][2];

int main() {
    int n;
    cin >> n;
    REP(i, 100) REP(j, 100)
        dp[i][j] = INF;
    REP(i, n)
        cin >> size[i][0] >> size[i][1];
    REP(i, n) for(int j = 0; j < n - i; j++){
        if(i == 0){
            dp[i][j] = 0;
            continue;
        }
        if(i == 1){
            dp[i][j] = size[j][0] * size[j][1] * size[j+1][1];
            continue;
        }
        REP(k, i){
            dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-1-k][j+k+1] + size[j][0] * size[j+k][1] * size[j+i][1]);
        }
    }
    cout << dp[n-1][0] << endl;
    return 0;
}