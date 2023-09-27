//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<climits>

#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define fst first
#define snd second
#define pb push_back
#define ALL(x) x.begin(),x.end()
#define EPS (1e-9)
#define equals(a,b) (fabs((a)-(b))<EPS)

using namespace std;

bool LT(double a,double b) { return !equals(a,b) && a < b; }
bool LTE(double a,double b) { return equals(a,b) || a < b; }

const string YES = "";
const string NO  = "";

typedef long long ll;
typedef pair<int,int> ii;

#define MAX 210
int n;
ll A[MAX];
string s;

class XorBasis {
private:
  const static int len = 61;
  long long M[len];
public:
  XorBasis() { init(); }
  
  void init() { rep(i,len) M[i] = 0; }

  void add(long long x) {
    rep(i,len) {
      if( (x>>i) & 1LL ) {
	if( !( (M[i]>>i) & 1LL ) ) {
	  M[i] = M[i] ^ x;
	  return;
	}
	x = x ^ M[i];
      }
    }
  }

  bool query(long long x) {
    rep(i,len) {
      if( (x>>i) & 1LL ) {
	x = x ^ M[i];
      }
    }
    return x == 0LL;
  }
  
};

void solve() {
  XorBasis basis;
  basis.init();
  for(int i=n-1;i>=0;--i) {
    if( s[i] == '0' ) {
      basis.add(A[i]);
    } else {
      if( !basis.query(A[i]) ) {
	puts("1");
	return;
      }
    }
  }
  puts("0");
}

int main() {
  int T;
  cin >> T;
  while( T-- ) {
    cin >> n;
    rep(i,n) cin >> A[i];
    cin >> s;
    solve();
  }
  return 0;
}
