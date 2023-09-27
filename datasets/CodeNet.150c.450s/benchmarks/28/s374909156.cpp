#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <string>
#include <string.h>
#include <sstream>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

typedef long long ll;
const int MAX_N = 100000;

ll T[MAX_N];
int n, k;

int check(ll p){
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
  ll right = 100000 * 10000;
  ll mid;

  while(right - left > 1){
    mid = (left + right) / 2;

    int v = check(mid);

    if(v >= n){
      right = mid;
    }else{
      left = mid;
    }
  }

  return right;
}

int main(){
  cin >> n >> k;

  for(int i = 0; i < n; i++){
    cin >> T[i];
  }

  ll ans = solve();
  cout << ans << endl;

  return 0;
}