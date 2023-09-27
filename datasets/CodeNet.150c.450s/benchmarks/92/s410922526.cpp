#include<stdio.h>
int main(){int a,b;while(scanf("%d %d",&a,&b)!=-1){a+=b;b=0;while(a>0){a/=10;b++;}printf("%d\n",b);}return 0;}