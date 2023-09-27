#include <bits/stdc++.h>
using namespace std;
#define rep(i,s,n) for(int i = (s); i < (n); i++)
#define all(v) v.begin(), v.end()
#define allg(v) v.begin(), v.end(), greater<int>()

long long powpow(long long m, long long n) {
  long long ret = 1;
  while(n > 0) {
    if(n & 1) ret = ret * m % 1000000007;
    m = m * m % 1000000007;
    n >>= 1;
  }
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  long long m, n;
  cin >> m >> n;
  
  cout << powpow(m, n) << "\n";

}

