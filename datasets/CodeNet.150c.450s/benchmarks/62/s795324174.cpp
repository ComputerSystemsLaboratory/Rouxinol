#include <cstdio>
int main() {
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
if(a>b)a+=b,b=a-b,a-=b;
scanf("%d",&c);
if(b>c)b+=c,c=b-c,b-=c;
if(a>b)a+=b,b=a-b,a-=b;
printf("%d %d %d\n",a,b,c);
}