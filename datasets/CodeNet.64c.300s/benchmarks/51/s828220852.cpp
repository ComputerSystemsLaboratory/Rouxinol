#include<stdio.h>

int main(){

int n;
long p=1;

scanf("%d",&n);
for(int i=1;i<=n;i++)
p=p*i;

printf("%ld\n",p);
return 0;

}