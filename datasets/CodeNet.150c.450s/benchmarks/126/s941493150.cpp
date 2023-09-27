#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
while(1){
int d[17][17]={0},i,j,a,b,n,m[17][17]={0},x,y;
scanf("%d%d",&a,&b);
if(a==0&&b==0)
return 0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&x,&y);
m[x][y]=1;
}
d[1][1]=1;
for(i=1;i<=a;i++){
for(j=1;j<=b;j++){
if(m[i][j]!=1){
if(a>=i+1&&m[i+1][j]!=1)
d[i+1][j]=d[i+1][j]+d[i][j];
if(b>=j+1&&m[i][j+1]!=1)
d[i][j+1]=d[i][j+1]+d[i][j];
}
}
}
printf("%d\n",d[a][b]);
}
return 0;
}

