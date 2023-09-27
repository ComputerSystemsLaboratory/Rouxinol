#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int N, W;
int value[1001], weight[1001];
int dp[101][100001];

int main(void)
{

    cin >> N >> W;
    for (int i=0; i<N; ++i) cin >> value[i] >> weight[i];
    for (int i=0; i<N; ++i) dp[0][i] = 0;

    for (int i=0; i<N; ++i) {
        for (int w=0; w<=W; ++w) {
            if (w >= weight[i]) dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
            else dp[i+1][w] = dp[i][w];
        }
    }
    cout << dp[N][W] << endl;
}

