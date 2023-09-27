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

  int N;

  cin >> N;

  string U[N];

  REP(i, N) cin >> U[i];

  int M;
  cin >> M;

  string moji;
  int door = 0;
  REP(i, M){
    int cnt = 0;
    cin >> moji;
    REP(i, N){
      if(moji == U[i]){
        cnt = 1;
        door++;
        break;
      }else{
        cnt = 0;
      }
  }
  if(cnt == 1 && door%2 == 1) cout <<  "Opened by" << " " << moji << endl;
  else if(cnt == 1 && door%2 == 0) cout <<  "Closed by" << " " << moji << endl;
  else cout <<  "Unknown" << " " << moji << endl;
}
  return 0;
}