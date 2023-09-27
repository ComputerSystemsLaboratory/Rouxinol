#include<stdio.h>
int main()
{
int a,b,w;
char op;
w=0;
while(1){
scanf("%d",&a);scanf("%s",&op);scanf("%d",&b);
if(op=='+')w=a+b;
else if(op=='-')w=a-b;
else if(op=='*')w=a*b;
else if(op=='/')w=a/b;
else if(op=='?')break;
printf("%d\n",w);
}






return 0;
}