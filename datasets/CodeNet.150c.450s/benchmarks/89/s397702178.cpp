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

bool is_prime(int x){

  if(x<=1) return false;
  
  for(int i=2;i*i<=x;i++){
    if(x%i==0) return false;
  }

  return true;
}

bool calc(){
  int a,d,n;

  scanf("%d%d%d",&a,&d,&n);

  if(a==0) return false;
  
  for(int i=0;;i++){
    n -= is_prime(a+d*i);

    if(n==0){
      printf("%d\n",a+d*i);
      return true;
    }
  }

  return true;
}

int main(){
  int n;
  
  while(calc());
  
  return 0;
}