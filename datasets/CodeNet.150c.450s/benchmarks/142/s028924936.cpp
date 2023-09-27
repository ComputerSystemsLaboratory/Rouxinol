#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int main() {
  int n,k;
  cin >> n >> k;
  vector<long int> a(n+1);
  rep(i,n) cin >> a[i];
  for(int i = 1;i <= n-k;i++) {
    if(a[i] < a[i+k]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}