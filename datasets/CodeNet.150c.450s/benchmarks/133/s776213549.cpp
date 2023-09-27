#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define REP1(i,n) for(int i=1, i##_len=(n); i<i##_len; ++i)
#define ll long long
static const int MAX = 10000;
static const ll INFTY = 1e12;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll MRINF = 5000000000000000;

int main() {

  ll D; cin >> D;
  vector<ll> c(26);
  REP(i, 26)cin >> c[i];
  vector<vector<ll>> s(D, vector<ll>(26));
  REP(i, D)REP(j, 26)cin >> s[i][j];
  vector<ll> last(26, 0);

  vector<ll> t(D);
  REP(i, D){
    cin >> t[i];
    t[i]--;
  }

  ll ans = 0;

  REP(i, D){
    //i日目に増えるスコア
    ll score;
    score = s[i][t[i]];
    last[t[i]] = i+1;
    // cout << score << endl;

    //i日目に減るスコア
    ll bye_score = 0;
    REP(j, 26){
      bye_score += c[j] * (i+1-last[j]);
    } 
    ans += score - bye_score;
    cout << ans << endl;
    // break;
  }


}
/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
         pass System Test!
*/