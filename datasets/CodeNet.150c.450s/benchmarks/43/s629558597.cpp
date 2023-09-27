#include <cstdio>
int main(){
 int asum,bsum,a,b,n,i;
 scanf("%d",&n);
 while(n>0){
 asum=bsum=0;
 for(i=0;i<n;i++){
  scanf("%d %d",&a,&b);
  if (a>b) asum += a+b;
  if (a<b) bsum += a+b;
  if (a==b) { asum += a; bsum += b; }
 };
 printf("%d %d\n",asum,bsum);
 scanf("%d",&n);
 }
 return 0;
};