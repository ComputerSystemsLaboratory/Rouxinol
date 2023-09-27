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
 
int cnt, A[500010];
 
int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);
 
  int N;
  cin >> N;
  REP(i, N) cin >> A[i];
  stack<P> stk;
  stk.push(P(0, N));
  while (!stk.empty()) {
    P p = stk.top(); stk.pop();
    int left = p.first, right = p.second, mid = (left + right) / 2;
    if (left + 1 < right) {
      stk.push(P(mid, right));
      stk.push(P(left, mid));
      cnt += right - left;
    }
  }
  sort(A, A + N);
  REP(i, N) {
    cout << A[i] << (i == N-1 ? '\n' : ' ');
  }
  cout << cnt << endl;
  return 0;
}