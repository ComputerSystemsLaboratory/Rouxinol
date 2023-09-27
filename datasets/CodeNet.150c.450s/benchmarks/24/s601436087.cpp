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
  int n, m;
  vector<pair<int,int> > vec;
  
  scanf("%d%d", &n,&m);

  if(n == 0)return false;
  
  for(int i=0;i<n;i++){
    int p, d;
    scanf("%d%d", &d, &p);
    vec.push_back({p, d});
  }

  sort(vec.begin(), vec.end(), greater<pair<int,int> >());

  ll ans = 0;
  
  for(int i=0;i<n;i++){
    int d = vec[i].second;
    int p = vec[i].first;

    if(d > m){
      d -= m;
      m = 0;
    }else{
      m -= d;
      d = 0;
    }

    ans += (ll)d * p;
  }


  printf("%lld\n",ans);
  return true;
}

int main(){
  while(solve());
  
  return 0;
}

