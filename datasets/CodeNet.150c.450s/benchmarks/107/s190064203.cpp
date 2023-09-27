#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s, t;

int main(){
  cin >> s >> t;

  //空文字を挿入しておく
  s.insert(s.begin(), ' '); t.insert(t.begin(), ' ');

  //dpテーブルの確保と初期化
  int dp[t.length()][s.length()];
  for(int i=0; i<t.length(); i++){
    for(int j=0; j<s.length(); j++){
      dp[i][j]=0;
      if(i==0) dp[i][j]=j;
      if(j==0) dp[i][j]=i;
    }
  }

  //dp
  for(int i=1; i<t.length(); i++){
    for(int j=1; j<s.length(); j++){
      int add, del, rep;
      add = dp[i-1][j]+1;
      del = dp[i][j-1]+1;
      rep = t[i]==s[j]? dp[i-1][j-1] : dp[i-1][j-1]+1;
      dp[i][j] = min(add, min(del, rep));
    }
  }

  cout << dp[t.length()-1][s.length()-1] << endl;

  return 0;
}

