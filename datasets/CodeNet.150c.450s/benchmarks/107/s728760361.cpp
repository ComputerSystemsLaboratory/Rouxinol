#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

const long long MOD = 1000000007;

int main(){
  string s,t;
  cin >> s >> t;
  int a=s.size(),b=t.size();
  vector<vector<int>> dp(a+1,vector<int>(b+1,0));

  rep(i,a+1) dp.at(i).at(0) = i;
  rep(i,b+1) dp.at(0).at(i) = i;

  rep(i,a){
      rep(j,b){
          dp.at(i+1).at(j+1)=min(min(dp.at(i).at(j),dp.at(i+1).at(j)),dp.at(i).at(j+1));
          dp.at(i+1).at(j+1) += 1;

          if(s.at(i)==t.at(j)) dp.at(i+1).at(j+1)=min(dp.at(i+1).at(j+1),dp.at(i).at(j));
      }
  }
  cout << dp[a][b] << endl;
}
