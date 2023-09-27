#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
 while(true) {
  int n;
  scanf("%d", &n);
  if (!n) break;
  int m=0x7fffffff;
  int M=-0x7fffffff;
  int sum=0;
  rep(i, n) {
   int t;
   scanf("%d",&t);
   sum+=t;
   if(m>t)m=t;
   if(M<t)M=t;
  }
  sum-=m;
  sum-=M;
  printf("%d\n",sum/(n-2));
 }
}