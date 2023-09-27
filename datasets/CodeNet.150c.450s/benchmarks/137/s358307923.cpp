#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define MP make_pair
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define fst first
#define snd second

int main() {
  std::ios_base::sync_with_stdio(false);
  set<string> dict;
  int N;
  cin >> N;

  REP(i, N) {
    string c, str;
    cin >> c >> str;
    if (c == "insert") {
      dict.insert(str);
    } else if (c == "find") {
      cout << (dict.find(str) != dict.end() ? "yes" : "no") << endl;
    }
  }

  return 0;
}