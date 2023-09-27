#include<stdio.h>

int main(void)

{

int a,b,c,i,s;

s=0;

scanf("%d %d %d",&a,&b,&c);

for(i=a;i<=b;i++)

{

if(c%i==0)

{

s=s+1;

}

}

printf("%d\n",s);

return 0;

}