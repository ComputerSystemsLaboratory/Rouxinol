#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define debug(x) cerr << #x << " = " << x << endl;


#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 100010


int solve(){
  int n,m;
  int a[SIZE] ={} ,b[SIZE] = {};
  map<int,int> mm;

  scanf("%d%d",&n,&m);

  if(n==0) return false;
  
  for(int i=1;i<=n;i++){
    scanf("%d",a+i);
  }
  for(int i=0;i<n;i++){
    a[i+1] += a[i];
  }

  for(int i=0;i<n;i++){
    for(int j=i+1;j<=n;j++){
      mm[a[j]-a[i]]++;
    }
  }

  for(int i=1;i<=m;i++){
    scanf("%d",b+i);
  }
  for(int i=0;i<m;i++){
    b[i+1] += b[i];
  }

  ll ans = 0;
  
  for(int i=0;i<m;i++){
    for(int j=i+1;j<=m;j++){
      ans += mm[b[j]-b[i]];
    }
  }

  printf("%lld\n",ans);
  
  
  return true;
}

int main(){
  while(solve());

  return 0;
}