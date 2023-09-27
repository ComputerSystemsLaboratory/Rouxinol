#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
 * 文字列sと文字列tの編集距離
 * 文字列sに対して、文字の「挿入」「削除」「置換」をコスト1で行い、文字列tに一致する最小コストを計算する
 *
 * Algorithn: 動的計画法
 *      定義
 *          dp[i][j] := s[0,i),t[0,j)の編集距離
 *      遷移
 *          挿入 dp[i][j] <- dp[i-1][j]+1
 *          削除 dp[i][j] <- dp[i][j-1]+1
 *          置換 dp[i][j] <- dp[i-1][j-1]+(s[i]!=t[j])
 */
int LevenshteinDistance(const std::string& s,const std::string& t){
    const int inf = (1<<29);
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,inf));
    for(int i=0;i<n;i++) dp[i][0] = i;
    for(int i=0;i<m;i++) dp[0][i] = i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j] = min({
                    dp[i-1][j]+1, // 追加
                    dp[i][j-1]+1,
                    dp[i-1][j-1]+(s[i-1]!=t[j-1]),
                    });
        }
    }
    return dp[n][m];
}

int main(){
    string s,t; cin >> s >> t;
    cout << LevenshteinDistance(s,t) << endl;
}

