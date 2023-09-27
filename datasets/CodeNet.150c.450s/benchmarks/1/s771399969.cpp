#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// コイン両替問題：
//     額面が d1, ..., dm のコインで n 支払う
//     各コインの使用枚数は無制限
int coin_changing(vector<int> coin, const int sum) {
    static const int INF = 1000000000;
    sort(coin.begin(), coin.end());
    vector<int> dp(sum + 1, INF);
    dp[0] = 0;
    for(const auto& d: coin)
        for(int s = d; s <= sum; ++s)
//      for(int s = n; s - d >= 0; --s) // 1 枚制限
            dp[sum] = min(dp[s], dp[sum - d] + 1);
    return dp[sum];
}

// ナップサック問題
struct Goods {int value, weight;};
int knapsack(const vector<Goods>& goods, const int capacity) {
    vector<int> dp(capacity + 1, 0);
    for(const auto& g: goods)
        for(int w = g.weight; w <= capacity; ++w)
//      for(int w = W; w - g.weight >= 0; --w)  // 1 個制限
            dp[w] = max(dp[w], dp[w - g.weight] + g.value);
    return *max_element(dp.begin(), dp.end());
}

// 最長増加部分列：O(n ^ 2)
// int longest_increasing_subsequence(const vector<int>& sequence) {
//     vector<int> dp(sequence.size(), 1);
//     for(int i = 1; i < dp.size(); ++i)
//         for(int j = i - 1; j >= 0; --j)
//             if(sequence[j] < sequence[i]) dp[i] = max(dp[i], dp[j] + 1);
//     return *max_element(dp.begin(), dp.end());
// }
// 最長増加部分列：O(n log n)
int longest_increasing_subsequence(const vector<int>& sequence) {
    vector<int> last;
    last.push_back(sequence[0]);
    for(const auto& i: sequence) {
        if(last.back() < i) last.push_back(i);
        else                *lower_bound(last.begin(), last.end(), i) = i;
    }
    return last.size();
}

int main() {
    int n;
    while(cin >> n) {
        vector<int> array(n);
        for(auto& a: array) cin >> a;
        cout << longest_increasing_subsequence(array) << endl;
    }
}