#include<stdio.h>

int main()
{
int n,con;
con=0;
while(scanf(" %d",&n)!=EOF)
{
for(int a=0;a<10;a++)
for(int b=0;b<10;b++)
for(int c=0;c<10;c++)
for(int d=0;d<10;d++)
if(a+b+c+d==n)con++;
printf("%d\n",con);
con=0;
}
return 0;

}