#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool stackable(ll P, ll* bag, int n, int kk){
  int w = 0;
  int k = 1;
  if(bag[0] > P) return false;
  for(int i = 0; i < n; i++){
    if(w + bag[i] <= P){
      w += bag[i];
    }else{
      k++;
      if(bag[i] > P) return false;
      w = bag[i];
    }
  }
  if(w == 0) k--;
  return k <= kk;
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll baggage[100000];
  int n, k; cin >> n >> k;
  for(int i = 0; i < n; i++) cin >> baggage[i];

  ll l = 0, r = 10000*100000;
  while(l < r-1){
    ll mid = (l+r)/2;
    if(stackable(mid, baggage, n, k)){
      r = mid;
    }else{
      l = mid;
    }
  }
  cout << r << endl;
  return 0;
}