/*
 *
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for(int i = (int)(a); i < (int)(b); ++i)
#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define RREP(i, n) for(int i = (int)(n - 1); i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SQ(n) (n) * (n)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vc> vvc;
typedef vector<vll> vvll;

int main() {
  int n;
  cin >> n;
  REP(ii, n){
    set<string> cnt;
    string s;
    cin >> s;
    FOR(i, 1, s.length()){
      stringstream s1, s2;
      REP(j, i){
        s1 << s[j];
      }
      FOR(j, i, s.length()){
        s2 << s[j];
      }
      string ss1 = s1.str();
      string ss2 = s2.str();
      string ss3 = s1.str();
      string ss4 = s2.str();
      reverse(ALL(ss3));
      reverse(ALL(ss4));

      cnt.insert(ss1 + ss2);
      cnt.insert(ss1 + ss4);
      cnt.insert(ss3 + ss2);
      cnt.insert(ss3 + ss4);
      cnt.insert(ss2 + ss1);
      cnt.insert(ss2 + ss3);
      cnt.insert(ss4 + ss1);
      cnt.insert(ss4 + ss3);
    }
    cout << cnt.size() << endl;
  }
}