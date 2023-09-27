#include <iostream>
#include <map>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define mp make_pair

int n;
char message[10000000];

void solve() {
  map<char,char> ct;
  rep(i,n) {
    char from, to; cin>>from>>to;
    ct.insert(mp(from, to));
  }
  
  int m; cin>>m;
  rep(i,m) cin>>message[i];
  
  rep(i,m) {
    if (ct.count(message[i])) message[i] = ct[message[i]];
  }
  
  rep(i,m) cout<<message[i];
  cout<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>n, n) {
    solve();
  }
  return 0;
}