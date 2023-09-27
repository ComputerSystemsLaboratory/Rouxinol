#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
using namespace std;

int main() {
  string s, p;
  int n1, n2, flag = 0;
  cin >> s >> p;
  n1 = s.size();
  n2 = p.size();
  s =  s + s;
  REP(i, n1) {
    if (s.substr(i, n2) == p)
      flag = 1;
  }
  if (flag == 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}