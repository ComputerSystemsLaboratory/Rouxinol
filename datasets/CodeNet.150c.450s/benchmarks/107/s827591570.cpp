#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Levenshtein Distance とは、挿入・削除・置換でS->Tに変換する最小回数

// dp[i][j]: S[0:i] -> T[0:j] に変換する最小回数

// 挿入
//  dp[i+1][j+1] = dp[i+1][j] + 1

// 削除
//  dp[i+1][j+1] = dp[i][j+1] + 1

// 置換
//   S[i] == T[j] ならば dp[i+1][j+1] = dp[i][j]
//   S[i] != T[j] ならば dp[i+1][j+1] = dp[i][j] + 1

int levenshtein_distance(string &S, string &T) {
    int s = S.size(), t = T.size();
    vector <vector<int>> dp(s + 1, vector<int>(t + 1, 1 << 30));
    for (int i = 0; i <= s; i++) dp[i][0] = i;
    for (int j = 0; j <= t; j++) dp[0][j] = j;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            if (S[i] == T[j]) dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
            else dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + 1);
            dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j + 1] + 1);
            dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i + 1][j] + 1);
        }
    }
    return dp[s][t];
};


// verified
//  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_E&lang=jp
void AOJ_DPL_1_E(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << levenshtein_distance(s1, s2) << '\n';
}

int main() {
    AOJ_DPL_1_E();
    return 0;
}
