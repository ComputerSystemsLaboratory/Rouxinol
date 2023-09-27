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

  int N, A, B, C, X;

  while(1){
  cin >> N >> A >> B >> C >> X;

  if(N==0) break;

  int Y[N];
  REP(i, N) cin >> Y[i];

  int j=0;
  int cnt=0;

  while(j < N){
    if(X == Y[j]){
      X = (A*X+B)%C;
      j++;
      cnt++;
  }else{
    X = (A*X+B)%C;
    cnt++;
  }
  if(cnt>10000){
    break;
  }
}
if(cnt == 10001 && j < N) cout << -1 << endl;
else cout << cnt-1 << endl;
}
  return 0;
}