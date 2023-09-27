#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<long>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvl = vector<vector<long>>;
using pii = pair<int, int>;
using pil = pair<int, long>;
using pll = pair<long, long>;
#define fix20 cout << fixed << setprecision(20)
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define rep(i,n) for(int i=0; i<(int)(n);i++)
#define REP(i,s,t) for(int i=s; i<t; i++)
#define RNG(i,s,t,u) for(int i=s; i<t; i+=u)
#define MOD 1000000007
#define all(vec) vec.begin(), vec.end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main(){
  long D;
  cin >> D;
  vector<long> c(26);
  rep(i,26) cin >> c.at(i);
  vector<vector<long>> s(D,vector<long>(26));
  rep(i,D){
    rep(j,26) cin >> s.at(i).at(j);
  }

  vector<long> t(D);
  rep(i,D) cin >> t.at(i);
  vector<long> lastday(26,-1);


  long ans = 0;
  rep(i,D){
    long tt = t.at(i) - 1;
    ans += s.at(i).at(tt);
    lastday.at(tt) = i;
    rep(j,26){
      ans -= (i - lastday.at(j)) * c.at(j);
    }
    cout << ans << endl;
  }

}