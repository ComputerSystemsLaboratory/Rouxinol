#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)

using namespace std;

#define MAX 100010

int bit[MAX];

inline void add(int x,int w) {
  for(;x<MAX;x+=(x&-x)) bit[x] += w;
}

inline int sum(int x) {
  int ret = 0;
  for(;x>0;x-=(x&-x)) {
    ret += bit[x];
  }
  return ret;
}

int main() {
  int n,q;
  cin >> n >> q;
  int c,x,y;
  rep(i,q) {
    cin >> c >> x >> y;
    if( c == 0 ) {
      add(x,y);
    } else {
      cout << sum(y) - sum(x-1) << endl;
    }
  }
  
  return 0;
}