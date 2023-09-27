#include<stdio.h>

int main(){
int a,b,c,d,e;
while(1){
scanf("%d",&a);
if(a==0) break;
d=e=0;
for(int i=0;i<a;i++)
{scanf("%d%d",&b,&c);
if(b<c) e=e+b+c;
else if(b>c) d=d+b+c;
else {d=d+b;
e=e+c;}}
printf("%d %d\n",d,e);
}
return 0;
}