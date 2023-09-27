#include<stdio.h>
#include<iostream>
using namespace std;

struct PNL{int x;int y;};


int main(){
struct PNL p[201];
int x=0,y=0,N,n=0,cmd=0,X=0,Y=0,xl=0,yl=0;
while(1){
x=0,y=0,N,n=0,cmd=0,X=0,Y=0,xl=0,yl=0;
cin>>N;if(N==0)break;
p[0].x=0;p[0].y=0;
for(int i=1;i<N;i++)
{
cin>>n>>cmd;
if(cmd==0){p[i].x=p[n].x-1;p[i].y=p[n].y;}
else if(cmd==1){p[i].x=p[n].x;p[i].y=p[n].y-1;}
else if(cmd==2){p[i].x=p[n].x+1;p[i].y=p[n].y;}
else if(cmd==3){p[i].x=p[n].x;p[i].y=p[n].y+1;}
}

for(int j=0;j<N;j++)
{if(p[j].x>X)X=p[j].x;
else if(p[j].x<xl)xl=p[j].x;
else if(p[j].y>Y)Y=p[j].y;
else if(p[j].y<yl)yl=p[j].y;
}
x=X-xl+1;y=Y-yl+1;
printf("%d %d\n",x,y);
for(int j=0;j<N;j++)
{p[j].x=0;p[j].y=0;}

}
return 0;
}