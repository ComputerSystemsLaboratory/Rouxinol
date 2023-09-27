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

void calc(int n){
  int a,b,c,x,y;

  scanf("%d%d%d%d",&a,&b,&c,&x);

  int ans = 0;
  
  for(int i=0;i<n;i++){
    scanf("%d",&y);

    if(ans==-1) continue;

    if(y==x && i==0) continue;
    
    while(1){
      x = (a*x + b)%c;
      ans++;

      if(ans>10000){
	ans = -1;
	break;
      }
      
      if(x==y) break;
    }
  }
  
  printf("%d\n",ans);
}

int main(){
  int n;
  
  while(1){
    scanf("%d",&n);
    if(n==0) break;
    calc(n);
  }
  
  return 0;
}