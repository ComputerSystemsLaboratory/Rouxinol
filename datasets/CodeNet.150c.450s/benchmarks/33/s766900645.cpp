#include<stdio.h>

int main(){

int x,y,s;
while(1){

scanf("%d%d%d",&x,&y,&s);if(x==0&&y==0&&s==0)break;
int max=0;
int ng=0,mg=0;int n=0,m=0;
int X=100+x,Y=100+y;
for(int i=1;i<s;i++){
ng=i*X/100;n=i*Y/100;
for(int j=1;j<=s-i;j++)
{
mg=j*X/100;m=j*Y/100;
if(ng+mg==s&&n+m>max)max=n+m;
}
}
printf("%d\n",max);
}
return 0;
}