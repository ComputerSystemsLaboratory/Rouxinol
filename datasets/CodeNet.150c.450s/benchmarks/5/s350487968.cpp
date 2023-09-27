#include <cstdio>
int main(){
 int v[101];
 int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++) scanf("%d",&(v[i]));
 for(i=n-1;i>=1;i--) printf("%d ",v[i]);
 printf("%d\n",v[0]);
 return 0;
};