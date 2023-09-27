#include <stdio.h>
int main(){
int a,b,c;
int tmp=0;
scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
if(a>b){tmp=a;a=b;b=tmp;}
if(b>c){tmp=b;b=c;c=tmp;}
if(a>b){tmp=a;a=b;b=tmp;}
printf("%d %d %d\n",a,b,c);
return 0;
}