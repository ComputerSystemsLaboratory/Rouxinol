#include <stdlib.h>
#include <stdio.h>

int fib(int n){
int i;
int a[44];
a[0]=a[1]=1;
for(i=2;i<=n;i++){
a[i]=a[i-1]+a[i-2];
   }
return a[n];
}

int main(){

int x,n;
scanf("%d",&n);
x=fib(n);
printf("%d\n",x);

return 0;
}