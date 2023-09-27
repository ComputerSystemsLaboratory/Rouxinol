#include<stdio.h>

int main(){

int C=0;
for(int i=1;i<1000;i++)
{if(i%3==0)C+=200;else C+=195;}


int n,y,m,d;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d%d%d",&y,&m,&d);
if(y==0&&m==0&&d==0)break;

int c=0;
for(int i=1;i<y;i++)
{if(i%3==0)c+=200;else c+=195;}

for(int i=1;i<m;i++){
if(y%3==0)c+=20;
else if(i%2==0)c+=19;
else c+=20;
}
c+=d;
int s=C-c+1;

printf("%d\n",s);
}
return 0;
}