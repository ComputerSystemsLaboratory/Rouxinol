#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,s,n) for(int i = s; i < (int)(n); i++)

int main() {
  int n,k;
  cin >> n >> k;
  vector<int>a(n);
  rep(i,0,n) cin >> a[i];
  rep(i,k,n) cout << (a[i] > a[i-k] ? "Yes" : "No") << endl;
}