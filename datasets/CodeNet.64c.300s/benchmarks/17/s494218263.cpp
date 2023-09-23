#include<stdio.h>

int main(){


int x,y,s;
while(1){
scanf("%d%d%d",&x,&y,&s);
if(x==0&&y==0&&s==0)break;
int X=100+x;int Y=100+y;int max=0;
for(int i=1;i<s;i++)
for(int j=1;j<s;j++)
{if(i*X/100+j*X/100==s&&max<i*Y/100+j*Y/100)max=i*Y/100+j*Y/100;}

printf("%d\n",max);
}
return 0;

}