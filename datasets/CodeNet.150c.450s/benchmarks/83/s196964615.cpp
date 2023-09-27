// ナップサック問題

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Goods {int value, weight;};

int main() {
    int N, W;
    while(cin >> N >> W) {
        vector<Goods> goods(N);
        for(auto& g: goods) cin >> g.value >> g.weight;

        vector<int> dp(W + 1, 0);
        for(const auto& g: goods) for(int w = W; w - g.weight >= 0; --w) dp[w] = max(dp[w], dp[w - g.weight] + g.value);
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
}