#include<stdio.h>
int main(){int n,a,b,c,s;scanf("%d",&n);while(n--){scanf("%d %d %d",&a,&b,&c);if(a>b){s=a;a=b;b=s;}if(b>c){s=b;b=c;c=s;}printf("%s\n",a*a+b*b==c*c?"YES":"NO");}return 0;}