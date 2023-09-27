#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;

int N, W;
int dp[1002][10002];
typedef struct item {
    int v;
    int w;
} Item;

vector<Item> its;

void solve() {
    for (int j = 0; j < N; ++j) {
        dp[j][0]  = 0;
    }
    for (int k = 0; k <= W; ++k) {
        if(k>=its[0].w) dp[0][k] = its[0].v;
        else dp[0][k] = 0;
    }
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j <= W; ++j) {
            if(j-its[i].w>=0){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-its[i].w] + its[i].v);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
}
int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) {
        int v,w;
        cin >> v >> w;
        Item it = {v, w};
        its.push_back(it);
    }
    solve();
    cout << dp[N-1][W] << endl;

    return 0;
}
