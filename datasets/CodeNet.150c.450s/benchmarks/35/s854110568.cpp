#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <deque>
#include <array>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define range(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define mp make_pair
#define pb push_back
#define fst first
#define snd second
#define all(x) x.begin(), x.end()
#define PI 3.1415926536

using namespace std;

const int MAX_N = 5000;
array<int, MAX_N + 1> bit;
int sets, n;

int sum(int i){
  int ret = 0;
  while(i > 0){
    ret += bit[i];
    i -= i & -i;
  }
  return ret;
}

void add(int i, int x){
  while(i <= n){
    bit[i] += x;
    i += i & -i;
  }
}

void solve(){
  cin >> n;
  if(n == 0) exit(0);
  bit.fill(0);
  for (int i = 1; i <= n; ++i) {
    int t; cin >> t;
    add(i, t);
  }

  int ans = -1e9;
  for (int i = 0; i <= n; ++i) {
    for (int j = i + 1; j <= n; ++j) {
      ans = max(ans, sum(j) - sum(i));
    }
  }
  cout << ans << endl;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  for(;;) solve();

  return 0;
}