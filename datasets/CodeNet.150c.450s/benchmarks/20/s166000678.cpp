#include<stdio.h>

int main()
{
int s;
scanf("%d",&s);
int x=s/3600;
int y=(s%3600)/60;
int z=s%60;
printf("%d:%d:%d\n",x,y,z);

return 0;
}