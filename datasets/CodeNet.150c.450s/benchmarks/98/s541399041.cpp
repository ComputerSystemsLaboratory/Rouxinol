#include<stdio.h>
#include <stdlib.h>

int main(){

int N,M;
while(1){
scanf("%d %d",&N,&M);if(N==0&&M==0)break;
int n[102]={},m[102]={};
int ns=0,ms=0;
for(int i=0;i<N;i++){
scanf("%d",&n[i]);ns+=n[i];}

for(int i=0;i<M;i++){
scanf("%d",&m[i]);ms+=m[i];}

for(int i=0;i<N;i++)
for(int j=N-1;j>i;j--)
if(n[j]<n[j-1]){int t=n[j];n[j]=n[j-1];n[j-1]=t;}

for(int i=0;i<M;i++)
for(int j=M-1;j>i;j--)
if(m[j]<m[j-1]){int t=m[j];m[j]=m[j-1];m[j-1]=t;}
int d=ms-ns;

//if(d<0)d*=-1;
int x=n[N-1],y=m[M-1];bool f=false;
for(int i=0;i<N;i++){
for(int j=0;j<M;j++)
if(ms+n[i]-m[j]==ns+m[j]-n[i]&&x+y>=n[i]+m[j]){x=n[i];y=m[j];f=true;}

//if(f==true)break;
}

if(f==true)printf("%d %d\n",x,y);
else printf("-1\n");
}

return 0;
}