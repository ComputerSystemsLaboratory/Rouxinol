#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long n, q, b, c,g;
  long long ans=0;
  cin >> n;
  vector<long long> a(10000000);
  for(long long i=1;i<=n;i++){
    cin >> g;
    a[g]++;
  }
  cin >> q;
  for(long long j=1;j<=a.size();j++){
    ans += a[j] * j;
  }
  
  for(long long i=1;i<=q;i++){
    cin >> b >> c;
    ans -= a[b] * b;
    ans -= a[c] * c;
    a[c] += a[b];
    a[b] = 0;
    ans += a[b] * b;
    ans += a[c] * c;
    cout << ans << endl;
  }
  
  
  
}