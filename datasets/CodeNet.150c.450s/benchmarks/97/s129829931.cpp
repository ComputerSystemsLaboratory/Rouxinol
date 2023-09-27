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
#define SIZE 201

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

void calc(int n){
  int x[SIZE],y[SIZE],p,d;
  int min_x=0,max_x=0,min_y=0,max_y=0;
  
  x[0] = y[0] = 0;
  
  for(int i=1;i<n;i++){
    scanf("%d%d",&p,&d);

    x[i] = x[p] + dx[d];
    y[i] = y[p] + dy[d];

    min_x = min(x[i],min_x);
    max_x = max(x[i],max_x);
    min_y = min(y[i],min_y);
    max_y = max(y[i],max_y);   
  }
  
  printf("%d %d\n",max_x-min_x+1,max_y-min_y+1);
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