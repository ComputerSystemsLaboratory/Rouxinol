#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#define rep(i, n) for (int i=0; i<n; ++i)
#define FOR(i, a, b) for (int i=a; i<b; ++i)
#define pb(x) push_back(x)
#define ll long long
#define ul unsigned long long
#define dbg(x) cout  << #x << " : " << (x) << endl
#define out(x) cout << (x)
#define outl(x) cout << (x) << endl
#define int(n); int n; cin >> n;
#define long(n); long long n; cin >> n;
#define dbl(f); double f; cin >> f;
#define s(s); string s; cin >> s;
#define into(a, n) for (int i = 0; i < n; ++i) cin >> a[i]
using namespace std;

const int inf =1500000000;

int a[11],b[11],c[11];

bool dfs(int l,char x) {
  if (l>=11) return true;
  if (x=='b') {
    b[l]=a[l];
    rep(i, l) if(b[l]<b[i]) {b[l]=-1; return false;}
  }
  if (x=='c') {
    c[l]=a[l];
    rep(i, l) if(c[l]<c[i]) {c[l]=-1; return false;}
  }
  bool p= dfs(l+1,'b')||dfs(l+1,'c');
  b[l]=-1;c[l]=-1;
  return p;
}

int main () {
  int(n);
  bool flg;
  rep(i, n) {
    flg=false;
    b[0]=-1;c[0]=-1;
    FOR(i, 1, 11) {
      cin>>a[i];
      b[i]=-1; c[i]=-1;
    }
    flg=dfs(1,'b')||dfs(1,'c');
    outl(flg?"YES":"NO");
  }
  return 0;
}