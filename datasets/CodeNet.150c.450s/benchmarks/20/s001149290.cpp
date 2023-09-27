#include<stdio.h>
int main(){
int q,h,m;
scanf("%d",&q);
h = q/3600;
q %= 3600;
m = q/60;
q%= 60;
printf("%d:%d:%d\n",h,m,q);
return 0;
}