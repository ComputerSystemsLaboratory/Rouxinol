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

#define mod 1000000007 //1e9+7
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 1001

vector<pair<int,pair<int,int> > > vec;


bool calc(){
  int n,m,d,p,ans=0;
  vector<pair<int,int> > vec;
  
  scanf("%d%d",&n,&m);

  if(n==0) return false;

  for(int i=0;i<n;i++){
    scanf("%d%d",&d,&p);

    vec.push_back({p,d});
    ans += p*d;
  }

  sort(vec.begin(),vec.end(),greater<pair<int,int> >());

  for(int i=0;i<n;i++){
    ans -= vec[i].first * min(m,vec[i].second);
    m = max(0,m-vec[i].second);
  }

  printf("%d\n",ans);
  
  return true;
}

int main(){

  for(int i=1;i<=150;i++){
    for(int j=i+1;j<=150;j++){
      vec.push_back({i*i+j*j,{i,j}});
    }
  }

  sort(vec.begin(),vec.end());
  
  while(calc());
  
  return 0;
}