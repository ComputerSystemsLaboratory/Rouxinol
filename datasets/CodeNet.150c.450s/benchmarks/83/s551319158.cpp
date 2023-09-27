#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>

using namespace std;

int main()
{
    int N = 0;
    int W = 0;
    cin >> N >> W;
    vector<pair<int, int>> vws;
    int v = 0;
    int w = 0;
    for (int i = 0; i != N; ++i){
        cin >> v >> w;
        vws.emplace_back(v, w);
    }
    vector<int> dp(W + 1, 0);  // dp[w]: maximum value of items with weight w.
    for (auto vw : vws){
        tie(v, w) = vw;
        for (int cum_w = W; cum_w > w; --cum_w){
            if (dp[cum_w - w]) dp[cum_w] = max(dp[cum_w], dp[cum_w - w] + v);
        }
        dp[w] = max(dp[w], v);
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
    return 0;
}