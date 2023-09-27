#include<stdio.h>
int main()
{
int m,n,r;
while(1){

scanf("%d",&m);scanf("%d",&n);scanf("%d",&r);
if(m==-1&&n==-1&&r==-1)break;
if(m==-1||n==-1)printf("F\n");
else if(m+n>=80)printf("A\n");
else if(m+n>=65)printf("B\n"); 
else if(m+n>=50)printf("C\n");
else if(m+n>=30){if(r>=50)printf("C\n");else if(r<50)printf("D\n");}
else if(m+n<30)printf("F\n");
}
return 0;
}