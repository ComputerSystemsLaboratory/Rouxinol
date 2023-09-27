#include <iostream>
#include <algorithm>
#include <cstring>
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n)   REP(i,0,n)
#define inf (1<<29)
using namespace std;

int par[10000];

int find(int a) {
  return par[a] < 0 ? a : par[a] = find(par[a]);
}

int union_(int a, int b) {
  a = find(a);
  b = find(b);
  if(a != b) {
    if(par[a] < par[b]) {
      par[a] += par[b];
      par[b] = a;
    } else {
      par[b] += par[a];
      par[a] = b;
    }
  }
  return a - b;
}


int main(){
  int n,q;
  cin >> n >> q;

  memset(par, -1, sizeof(par));
  int com, x, y;
  rep(i,q) {
    cin >> com >> x >> y;
    if(com == 1) {
      cout << (find(x) == find(y) ? 1 : 0) << endl;
    }
    if(com == 0) {
      union_(x, y);
    }
  }
  return 0;
}