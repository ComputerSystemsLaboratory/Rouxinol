#include <iostream>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

int n;

void solve() {
  int a = 0, b = 0;
  rep(i,n) {
    int ta, tb; cin>>ta>>tb;
    if (ta > tb) a += ta + tb;
    else if (ta < tb) b += ta + tb;
    else a += ta, b += tb;
  }
  cout<<a<<" "<<b<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>n, n) {
    solve();
  }
  return 0;
}