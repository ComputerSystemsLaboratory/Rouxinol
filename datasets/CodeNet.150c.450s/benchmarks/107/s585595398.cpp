#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<stack>
using namespace std;
#define INF (1 << 30) - 1
#define LINF 1LL << 60
const int MOD = 1000000007;
using ll = long long;
using P = pair<int, int>;

int dp[1010][1010];

int main(){
  string s, t;
  cin >> s >> t;

  int ss = s.size();
  int ts = t.size();
  // sからi文字分削除して0文字にするコスト
  for(int i = 0; i <= ss; ++i)dp[i][0] = i;
  // sが0文字の状態からj文字挿入してj文字にするコスト
  for(int j = 0; j <= ts; ++j)dp[0][j] = j;

  for(int i = 0; i < ss; ++i){
    for(int j = 0; j < ts; ++j){
      // 同じならコストその文字については0コストでok
      // そうでなければ1コスト払って置換or削除or挿入して片方に近づける
      // transform, erase, insert
      int cost = (s[i] == t[j]) ? 0 : 1;
      dp[i + 1][j + 1] = min({dp[i][j] + cost, dp[i + 1][j] + 1, dp[i][j + 1] + 1});
    }
  }

  cout << dp[ss][ts] << endl;

  return 0;
}

