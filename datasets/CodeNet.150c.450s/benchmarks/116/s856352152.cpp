#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
int a[100000];
int sum[100000];

void solve() {
  sum[0] = a[0];
  for(int i=1;i<n;i++) {
    sum[i] = sum[i-1] + a[i];
  }
  int res = sum[k-1];
  for(int i=0;i<=n-k;i++) {
    res = max(res,sum[i+k-1] - sum[i-1]);
  }
  cout << res << endl;
}

int main() {
  while(cin >> n >> k) {
    if(n==0 && k==0) break;
    for(int i=0;i<n;i++) {
      cin >> a[i];
    }
    solve();
  }
}