#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <chrono>
#define lint long long int
#define FOR(x, to) for(int x=0; x<(int)(to); x++) // for簡略表記
#define DUMP(ar) for(int loop=0; loop<(int)ar.size(); loop++) cout << "[" << loop << "]:" << ar[loop] << endl // 配列一覧表示
#define DUMPL(ar) for(int loop=0; loop<(int)ar.size(); loop++) { cout << ar[loop]; if(loop<(int)ar.size()-1) cout << ' '; } cout << endl; // 配列一行一覧表示
#define COUT(x) cout << x << endl // 単要素出力
#define ALL(ar) ar.begin(), ar.end() // コンテナの全要素
#define LOOPD(i) cout << "ループ[" << i << "]回目---------------" << endl // ループ回数デバグ
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string s1, s2;
    cin >> s1 >> s2;
    int s1_size = s1.size(), s2_size = s2.size();
    int cost_i = 1, cost_d = 1, cost_s = 1;

    // s1をs2にする編集距離
    vector<vector<int>> dp(s1_size+1, vector<int>(s2_size+1, 0));
    for(int i=0; i<s1_size+1; i++){
        dp[i][0] = i * cost_d;
    }
    for(int i=0; i<s2_size+1; i++){
        dp[0][i] = i * cost_i;
    }

    // 上から下は削除, 左から右は挿入, 斜めは置換
    // 同一の場合は斜めからコストなしで作成可
    for(int i=1; i<s1_size+1; i++){
        for(int j=1; j<s2_size+1; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = min(dp[i-1][j] + cost_d, min(dp[i][j-1] + cost_i, dp[i-1][j-1] + cost_s));
            }
        }
    }
    
    COUT(dp.back().back());
    
    return 0;
}
