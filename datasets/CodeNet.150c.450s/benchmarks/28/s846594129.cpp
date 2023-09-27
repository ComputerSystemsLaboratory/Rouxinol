#include <iostream>
using namespace std;

#define MAX 100000
typedef long long ll;

int n, k;
ll T[MAX];


int check(int p){
  int i = 0;
  for(int j = 0; j < k; j++){
    ll s = 0;
    while(s + T[i] <= p){
      s += T[i];
      i++;
      if(i == n) return n;
    }
  }
  return i;
}

int solve(){
  ll left = 0;
  ll right = 1000000000;
  ll mid;
  while( right > left){
    mid = (left + right) / 2;
    int v = check(mid);
    if (v>=n) right = mid;
    else left = mid + 1;
  }
  return right;
}

int main(){
  cin >> n >> k;
  for(int i = 0; i < n; i++) cin >> T[i];
  ll ans = solve();
  cout << ans << endl;
  return 0;
}