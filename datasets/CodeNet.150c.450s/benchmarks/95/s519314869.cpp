#include <bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
int main() {
  int N;
  while(cin >> N && N){
  string s;
  int prev = 0;
  int cnt = 0;
  bool l = 0, r = 0;
  rep(i, N) {
    cin >> s;
    if(s == "lu") { l = 1; }
    if(s == "ru") { r = 1; }
    if(s == "ld") { l = 0; }
    if(s == "rd") { r = 0; }
    if(!prev && l && r) { prev = 1; cnt ++; }
    else if(prev && !l && !r) { prev = 0; cnt ++; }
  }
  cout << cnt << endl;}
  return 0;
}