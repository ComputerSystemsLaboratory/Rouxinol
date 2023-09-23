#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M, P;

  while(1){
  cin >> N >> M >> P;

  if(N==0 && M==0 && P==0) break;

  int X[N];
  int tot = 0;

  REP(i, N){
    cin >> X[i];
    tot += 100*X[i];
  }

  tot = tot*(100-P)/100;

  if(X[M-1] != 0 ) cout << tot/X[M-1] << endl;
  if(X[M-1] == 0) cout << 0 << endl;
}
  return 0;
}