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

void calc(int y,int m,int d){
  int ans = 0;

  if(y%3==0 || m%2){
    ans += 21-d;
  }else{
    ans += 20-d;
  }

  if(y%3==0){
    ans += (10-m)*20;
  }else{
    if(m%2){
      ans += (10-m)/2 * (19+20) + 19;
    }else{
      ans += (10-m)/2 * (19+20);
    }
  }

  for(int i=y+1;i<1000;i++){
    if(i%3==0) ans += 20*10;
    else ans += (20+19)*5;
  }
  
  printf("%d\n",ans);
}

int main(){
  int n,y,m,d;

  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    scanf("%d%d%d",&y,&m,&d);
    calc(y,m,d);
  }
  
  return 0;
}