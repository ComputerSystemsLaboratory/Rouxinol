#include<stdio.h>
int main(){int n,a,b,c;scanf("%d",&n);while(n--){scanf("%d %d %d",&a,&b,&c);a*=a;b*=b;c*=c;printf("%s\n",a+b==c||b+c==a||c+a==b?"YES":"NO");}return 0;}