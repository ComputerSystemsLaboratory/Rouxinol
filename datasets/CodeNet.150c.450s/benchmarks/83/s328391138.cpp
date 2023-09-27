#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_W 10000

int main(){
    int N, W;
    cin >> N >> W;

    int v[1001], w[1001];
    for(int i=0;i<N;i++)
        cin >> v[i] >> w[i];

    int dp[MAX_N+1][MAX_W+1];   //dp[i][j] : 品物i個重さjの時の価値

    for(int i=1;i<=N;i++){      //扱う品物の数を増やしていく
        for(int j=0;j<=W;j++){      //重さの総和を増やしていく
            if(j < w[i-1])              //i-1番目の品物の重さがj未満
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]]+v[i-1]);
        }
    }
    
    cout << dp[N][W] << endl;

    return 0;
}
