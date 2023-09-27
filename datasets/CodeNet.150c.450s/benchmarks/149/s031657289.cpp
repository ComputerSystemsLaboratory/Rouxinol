#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <set>
#include <deque>
#include <vector>
#define MAX 100100
#define rep(i,p) for(int i=0;i<p;i++)
#define rep1(i,p) for(int i=1;i<=p;i++)
#define pb push_back
using namespace std;
int n,q,x,y,com;
int v[10010];
int root (int child) {
  int a = child;
  while (v[a] != a) {
    a = v[a];
  }
  return a;
}
int main(){
  cin >> n >> q;
  // v array
  // 0..n-1 : i
  // n...   : 0
  rep(i,n) v[i] = i;
  rep(i,q) {
    cin >> com >> x >> y;
    // com = 0 : unite
    // com = 1 : same
    if (com == 0) {
      // com(x,y) : merge S_x with S_y
      v[root(x)] = root(y);
    } else {
      if (root(x) == root(y)) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
  return 0;
}