#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
#define MAX 10000
#define NIL -1

using namespace std;

int main() {
  int n;
  cin >> n;
  int F[50];
  F[0] = F[1] = 1;
  FOR(i, 2, n + 1) {
    F[i] = F[i - 1] + F[i - 2];
  }

  cout << F[n] << endl;

  return 0;
}