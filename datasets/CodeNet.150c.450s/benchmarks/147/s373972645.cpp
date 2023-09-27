#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int main() {
  int n,fx;
  cin >> n;
  vector<int> f(10001);
  rep(i,100) {
    rep(j,100) {
      rep(k,100) {
        fx = i * i + j * j + k * k + i * j + j * k + k * i;
        if(fx <= 10000) f[fx]++;
        else break;
      }
    }
  }
  rep(i,n) cout << f[i] << endl;
}