#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
using namespace std;
 
int A[50], n, memo[50][500];
 
int solve (int i, int m) {
  
  if (m == 0) 
    memo[i][m] = 1;
  else if (i >= n) 
    memo[i][m] = 0;
  else if (solve(i + 1, m))
    memo[i][m] = 1;
  else if (solve(i + 1, m - A[i])) 
    memo[i][m] = 1;
  else 
    memo[i][m] = 0;

  return memo[i][m];
}
 
int main(){
  REP(i, 50) {
    REP(j, 500) {
      memo[i][j] = -1;
    }
  }
  int q, M;
  cin >> n;
  REP(i, n) {
    cin >> A[i];
  }
  cin >> q;
  REP(i, q) {
    cin >> M;
    if (solve(0, M)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
 
  return 0;
}