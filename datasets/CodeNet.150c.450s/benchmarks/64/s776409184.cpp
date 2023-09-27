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

bool can_cons[2001];

int main() {
  ios_base::sync_with_stdio(false);
  int N, Q;
  cin >> N;
  fill (can_cons, can_cons + 2001, false);
  can_cons[0] = true;
  REP(i, N) {
    int a;
    cin >> a;
    for (int j = 2000; j >= 0; j--) {
      if (can_cons[j] && j + a <= 2000) {
	can_cons[j+a] = true;
      }
    }
  }

  cin >> Q;
  REP(i, Q) {
    int m;
    cin >> m;
    cout << (can_cons[m] ? "yes" : "no") << endl;
  }
  
  return 0;
}