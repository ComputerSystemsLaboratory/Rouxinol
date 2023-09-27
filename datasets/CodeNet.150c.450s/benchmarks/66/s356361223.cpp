#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <iostream>
#include <map>
#include <queue>
#include <sstream>
#include <string>
#include <stack>
#include <set>
#include <vector>

using namespace std;

#define all(c) ((c).begin()), ((c).end())
#define dump(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define REP(i, a, b) for (int i = a; i < (int)(b); i++)
#define rep(i, n) REP(i, 0, n)
#define mp make_pair
#define fst first
#define snd second
#define pb push_back

typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef pair<int,int> pii;

const int INF = 1 << 29;
const double EPS = 1e-10;


int main() {
  int N; cin >> N;
  map<string, bool> U;
  rep(i, N) {
    string s; cin >> s;
    U[s] = true;
  }

  bool closed = true;
  int M; cin >> M;
  rep(i, M) {
    string T; cin >> T;
    if (U[T] == false) {
      cout << "Unknown " << T << endl;
    }
    else {
      cout << (closed ? "Opened" : "Closed") << " by " << T << endl;
      closed ^= true;
    }
  }

  return 0;
}