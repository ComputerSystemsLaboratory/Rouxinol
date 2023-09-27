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
#define SIZE 21

void calc(int n){
  int l=1,sum=1;
  int ans = 0;

  for(int r=2;r<n;r++){
    sum += r;

    while(sum > n)sum -= l++;

    if(sum==n) ans++;
  }  

  printf("%d\n",ans);
  
  return;
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