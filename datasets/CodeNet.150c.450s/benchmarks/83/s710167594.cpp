#include <iostream>
#include <algorithm>
static const int MAX_N = 100;
static const int MAX_W = 10000;
using namespace std;

struct Item {
    int v;
    int w;
};

int N, W;
Item items[MAX_N+1];
int dp[MAX_N+1][MAX_W+1];

int main(void) {
    cin >> N >> W;
    for (int w = 0; w <= W; w++) {
        dp[0][w] = 0;
    }
    for (int i = 1; i <= N; i++) {
        cin >> items[i].v >> items[i].w;
    }

    for (int i = 1; i <= N; i++) {
        for (int w = 1; w <= W; w++) {
            if (items[i].w <= w) {
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-items[i].w] + items[i].v);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}