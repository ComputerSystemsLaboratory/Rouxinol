#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, a, b) for(long long i = a; i < b; i++)
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<ll> v(10000, 0);
  rep(x, 1, 101) {
    rep(y, 1, 101) {
      rep(z, 1, 101) {
        if(x*x + y*y + z*z + x*y + y*z + z*x <= 10000) {
          v[x*x + y*y + z*z + x*y + y*z + z*x]++;
        }
      }
    }
  }
  rep(i, 1, n+1) {
    cout << v[i] << "\n";
  }
}
