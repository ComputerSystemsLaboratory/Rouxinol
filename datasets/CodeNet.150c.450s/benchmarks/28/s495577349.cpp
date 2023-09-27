#include <bits/stdc++.h>
using namespace std;

#define MAX 100000
typedef long long ll;

int n, k;
ll w[MAX];

int check(ll mid){
  int j = 0;
  for(int i = 0; i < k; i++){
    ll s = 0;
    while(mid >= w[j] + s){
      s += w[j];
      j++;
      if(j == n) return n;
    }
  }
  return j;
}

int solve(){
  ll left = 0;
  ll right = 100000 * 10000;
  ll mid;

  while(right - left > 1){
    mid = (right + left) / 2;
    int x = check(mid);
    //  cout << x << endl;
    if(x >= n) right = mid;
    else left = mid;
  }
  return right;
}
int main(){


  cin >> n >> k;

  for(int i = 0; i < n; i++){
    cin >> w[i];
  }
  ll ans = solve();
  cout << ans << endl;
}