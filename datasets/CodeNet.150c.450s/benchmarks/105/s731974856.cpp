#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <ctime>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <memory.h>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long double LD;
typedef long long LL;
typedef pair<LL, LL> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#ifdef LOCAL
#define DEBUG(x) { cerr << "# " << #x << ": " << x << endl;}
#else
#define DEBUG(x)
#endif
mt19937_64 mt(time(0));
/*---------------------------------------------------------------------------------------------------
　　　　　　　　　　　 ∧＿∧
　　　　　 ∧＿∧ 　（´<_｀ ）　 Welcome to My Coding Space!
　　　　 （ ´_ゝ`）　/　 ⌒i
　　　　／　　　＼　 　  |　|
　　　 /　　 /￣￣￣￣/　　|
　 ＿_(__ﾆつ/　    ＿/ .| .|＿＿＿＿
　 　　　＼/＿＿＿＿/　（u　⊃
---------------------------------------------------------------------------------------------------*/
const int MAXN = 233;
LL nums[MAXN];
set<LL> suf[MAXN];

int find_k(LL val) {
  int k = 0;
  while ((1LL<<k) <= val) {
    k++;
  }
  return k-1;
}

void insert(set<LL>& cur, LL val) {
  for (auto it = cur.rbegin(); it != cur.rend(); it++) {
    int k = find_k(*it);
    if ((1LL<<k) & val) val ^= *it;
  }
  if (val != 0) cur.insert(val);
}

LL rem(const set<LL>& cur, LL val) {
  for (auto it = cur.rbegin(); it != cur.rend(); it++) {
    int k = find_k(*it);
    if ((1LL<<k) & val) val ^= *it;
  }
  return val;
}

int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cout.precision(10); cout << fixed;
#ifdef LOCAL
  freopen("../test.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
#endif
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      suf[i].clear();
    }
    suf[n].clear();
    string s; cin >> s;
    for (int i = n-1; i >= 0; i--) {
      suf[i] = suf[i+1];
      if(s[i] == '0') insert(suf[i], nums[i]);
    }
    bool flag = true;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        LL r = rem(suf[i+1], nums[i]);
        if (r != 0) {
          flag = false;
          break;
        }
      }
    }
    if (flag) cout << "0\n";
    else cout << "1\n";
  }






/*---------------------------------------Coding Space End------------------------------------------*/
#ifdef LOCAL
  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s." << endl;
#endif
  return 0;
}
/* author:  txingml */
/* picture is from hamayanhamayan(CF handle) */
