#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;

int main(){
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  int ans=0;
  rep(i,n-k){
    if(a[i] < a[i+k]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
