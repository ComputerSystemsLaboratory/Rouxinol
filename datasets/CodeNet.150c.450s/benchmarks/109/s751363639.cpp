#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int,int> P;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back

int n;

void solve() {
  vector<P> train;
  rep(i,n) {
    int hh, mm, ss, b, e;
    char c;
    cin>>hh>>c>>mm>>c>>ss;
    b = hh * 3600 + mm * 60 + ss;
    cin>>hh>>c>>mm>>c>>ss;
    e = hh * 3600 + mm * 60 + ss;
    train.pb(P(b, e));
  }
  sort(train.begin(), train.end());
  
  const int zzz = train.size();
  vector<P>::iterator it = train.begin();
  vector<int> times;
  rep(z,zzz) {
    bool flag = false;
    rep(i,times.size()) {
      if (times[i] <= (int)(it->first)) {
        times[i] = it->second;
        flag = true; break;
      }
    }
    if (!flag) times.pb(it->second);
    train.erase(it);
  }
  cout<<times.size()<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>n, n) {
    solve();
  }
  return 0;
}