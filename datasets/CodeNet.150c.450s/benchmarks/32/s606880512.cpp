#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <complex>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;

#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 100010


bool solve(){
  int m, n_min, n_max, p[SIZE];

  cin >> m >> n_min >> n_max;

  if(m == 0) return false;
  
  int ans_max = 0, ans = -1;
  
  for(int i=0;i<m;i++){
    cin >> p[i];
    if(i > 0 && n_min <= i && i <= n_max){
      if(ans_max <= p[i-1] - p[i]){
        ans_max = p[i-1] - p[i];
        ans = i;
      }
    }
  }

  cout << ans << endl;
  
  return true;
}

int main(){
  while(solve());
}

