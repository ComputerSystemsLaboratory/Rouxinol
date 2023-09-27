#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n,p,q; long long r;

int main() {
  
  p=-10000000; q=10000000;
  
  scanf("%d",&n);
  
  for(int i=0; i<n; i++){
    int a; 
    scanf("%d",&a);
    if(a>p){p=a;}
    if(a<q){q=a;}
    r+=a;
    
    }
  
   printf("%d %d %lld\n",q,p,r);
   

}