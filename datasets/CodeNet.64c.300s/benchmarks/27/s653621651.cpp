#include <stdio.h>
int main(void){
   int i, j, k,a;
for (a=1 ;a<300;a++) {
        int n,x,y=0;
   scanf("%d",&n);
   scanf("%d",&x);
   if(n==0&&x==0)break;
for ( i=1 ;i<n;i++) {
   for ( j=i+1;j<n;j++) {
       for ( k=j+1;k<=n;k++){
   if(i+j+k==x){
       y=y+1;
     }
       }
   }
}
       printf("%d\n",y);
}
}

