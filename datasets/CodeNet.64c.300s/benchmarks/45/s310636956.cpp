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
#define SIZE 100


void calc(int n,int m,int p){
  int x[SIZE],c=0;

  for(int i=0;i<n;i++){
    scanf("%d",x+i);
    c += x[i] * (100-p);
  }  

  if(x[m-1]==0)
    puts("0");
  else
    printf("%d\n",c/x[m-1]);
  
  return;
}

int main(){
  int n,m,p;
  
  while(1){
    scanf("%d%d%d",&n,&m,&p);

    if(n==0) break;
    
    calc(n,m,p);
  }

  return 0;
}