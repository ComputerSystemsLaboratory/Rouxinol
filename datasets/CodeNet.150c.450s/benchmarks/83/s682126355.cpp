#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;

int main(){
    int N, W;
    int value[105], weight[105];

    int dp[105][10005];

    cin >> N >> W;
    for(int i = 0; i < N; i++) cin >> value[i] >> weight[i];

    for(int w = 0; w < W; w++) dp[0][w] = 0;

    for(int i = 0; i < N; i++){
        for(int w = 0; w <= W; w++){
            if(w >= weight[i]){
                dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
            }else{
                dp[i+1][w] = dp[i][w];
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}

