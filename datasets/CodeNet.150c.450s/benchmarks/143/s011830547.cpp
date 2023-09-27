#include <iostream>

using namespace std;

#define int long long
#define rep(i,n) for(int i=0; i<(int)(n); i++)

const int N = (int)1e5+1;

signed main() {
  int t[N], n;
  rep(i,N) t[i] = 0;
  cin >> n;
  rep(i,n) {
    int a;
    cin >> a;
    t[a]++;
  }
  
  int q, s = 0;
  rep(i,N) s += i * t[i];
  cin >> q;
  rep(i,q) {
    int b, c;
    cin >> b >> c;
    s += (c - b) * t[b];
    t[c] += t[b];
    t[b] = 0;
    cout << s << endl;
  }
  return 0;
}