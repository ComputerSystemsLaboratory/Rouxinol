#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(scanf("%d\n", &n)){
    int asum = 0, bsum = 0, a[10000], b[10000];
    if(n == 0) return 0;

    for(int i = 0;i < n;i++) scanf("%d %d\n", &a[i], &b[i]);
    for(int i = 0;i < n;i++){
      if(a[i] > b[i]) asum += a[i]+b[i];
      else if(a[i] < b[i]) bsum += a[i]+b[i];
      else {
         asum += a[i];
         bsum += b[i];
      }
   }
   printf("%d %d\n", asum, bsum);
  }
}

