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

bool calc(){
  int e;
  int ans = INF;
  
  scanf("%d",&e);

  if(e==0) return false;

  for(int i=0;i*i*i<=e;i++){
    for(int j=0;j*j+i*i*i<=e;j++){
      ans = min(ans,j+i+(e-j*j-i*i*i));
    }
  }
      
  printf("%d\n",ans);
  
  return true;
}

int main(){
    
  while(calc());
  
  return 0;
}