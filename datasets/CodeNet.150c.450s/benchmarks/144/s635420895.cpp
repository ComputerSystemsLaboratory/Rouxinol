#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
#include <bits/stdc++.h>
using namespace std;
//~ using ll = long long;
//~ using P = pair<int, int>;

int main(){
  int n, m, l;
  cin >> n >> m >> l;
  
  int a[110][110] = {0};
  int b[110][110] = {0};
  long long int c[110][110] = {0};
  rep(i, n){
    rep(j, m){
      cin >> a[i][j];
    }
  }
  
  rep(j, m) {
    rep(k, l) {
      cin >> b[j][k];
    }
  }

  rep(i, n) {
    rep(k, l) {
      rep(j, m) {
        c[i][k] += a[i][j] * b[j][k];
      }
      if(k) cout << " ";
      cout << c[i][k];
    }
    cout << endl;
  }
  
  
  return 0;
}

