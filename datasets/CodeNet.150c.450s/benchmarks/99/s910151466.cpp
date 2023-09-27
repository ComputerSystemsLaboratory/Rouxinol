#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <complex>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <array>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define all(c) begin(c), end(c)
#define dump(c) cerr << "> " << #c << " = " << (c) << endl
#define tr(i, c) for (auto i = (c).begin(); i != (c).end(); i++)
#define REP(i, a, b) for (int i = a; i < (int)(b); i++)
#define rep(i, n) REP(i, 0, n)
#define mp make_pair
#define pb push_back

typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef pair<int,int> pii;

const int INF = 1 << 29;
const double EPS = 1e-10;

int decode(string a) {
  map<char, int> d;
  d['m'] = 1000;
  d['c'] = 100;
  d['x'] = 10;
  d['i'] = 1;

  int ret = 0;
  int n = 1;
  rep(i, a.size()) {
    char c = a[i];
    if (d[c] != 0) {
      ret += n * d[c];
      n = 1;
    }
    else {
      n = c - '0';
    }
  }

  return ret;
}

string encode(int a) {
  string s = to_string(a);
  while (s.size() != 4) s.insert(s.begin(), '0');
  string d = "mcxi";
  string ret;
  rep(i, 4) {
    if (s[i] == '0') continue;
    if (s[i] != '1') ret += s[i];
    ret += d[i];
  }

  return ret;
}

int main() {
  int CASES; cin >> CASES;
  while (CASES--) {
    string A, B; cin >> A >> B;
    cout << encode(decode(A) + decode(B)) << endl;


  }
  
  
  return 0;
}