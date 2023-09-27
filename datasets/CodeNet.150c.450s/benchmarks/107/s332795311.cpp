// 動的計画法

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
//       dp[i]: 長さ i の増加部分列を作ったとき、最後の要素の最小値
//       dp は昇順になるので
int longest_increasing_subsequence(const vector<int>& sequence) {
    vector<int> dp;
    dp.push_back(sequence[0]);
    for(const auto& i: sequence) {
        if(dp.back() < i)   dp.push_back(i);
        else                *lower_bound(dp.begin(), dp.end(), i) = i;
    }
    return dp.size();
}

// 編集距離：O(n * m)
//     挿入・削除・置換の回数
//     dp[i][j]: s1 の前方 i と、s2 の前方 j 文字との間のレーベンシュタイン距離
int Levenshtein_distance(string s1, string s2) {
    static const int INF = 1000000000;
    vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, INF));
    for(int i = 0; i <= s1.size(); ++i) dp[i][0] = i;
    for(int j = 0; j <= s2.size(); ++j) dp[0][j] = j;
    for(int i = 1; i <= s1.size(); ++i) for(int j = 1; j <= s2.size(); ++j) {
        dp[i][j] = min({
            dp[i - 1][j] + 1,
            dp[i][j - 1] + 1,
            dp[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1),
        });
    }
    return dp[s1.size()][s2.size()];
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << Levenshtein_distance(s1, s2) << endl;
}