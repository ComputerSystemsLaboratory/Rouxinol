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
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

int N, K;
int W[100010];

bool check(int P) {
  int truck = 1, sum = 0;
  REP(i, N) {
    if (W[i] > P) return false;
    if (sum + W[i] > P) {
      truck++;
      sum = W[i];
    } else {
      sum += W[i];
    }
  }
  //cout << sum << ' ' << truck << endl;
  return truck <= K;
}  

int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  cin >> N >> K;
  REP(i, N) cin >> W[i];

  int left = 0, right = (int)1e9;
  while (left + 1 < right) {
    int mid = (left + right) / 2;
    (check(mid) ? right : left) = mid;
  }
  cout << right << endl;      
  return 0;
}