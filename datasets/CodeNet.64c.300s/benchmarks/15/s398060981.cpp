#include <stdio.h>
  
int main(){
   int m, min, minn, i, j, n, c;
   int a[100];
   c=0;
   scanf("%d",&n);
   for(i=0;i < n;i++){
      scanf("%d",&a[i]);
   }
   for(i=0;i < n-1;i++){
      m=a[i];
      min=a[i];
      minn=i;
      for(j=i+1;j < n;j++){
         if(min > a[j]){
            min=a[j];
            minn=j;
         }
      }
      if(i != minn){
         a[i]=a[minn];
         a[minn]=m;
         c++;
      }
   }
   printf("%d",a[0]);
   for(i=1;i < n;i++){
      printf(" %d",a[i]);
   }
   printf("\n%d\n",c);
   return 0;
}