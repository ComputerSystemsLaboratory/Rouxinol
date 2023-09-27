#include<stdio.h>
int main()
{
int x,y,cou,w;
cou=0;w=0;

while(scanf("%d %d", &x, &y) != EOF){
cou=0;
w=x+y;
while(1)
{
if(w/10==0){cou++;break;}
else {w=w/10; cou++;}
}
printf("%d\n",cou);
}
return 0;
}