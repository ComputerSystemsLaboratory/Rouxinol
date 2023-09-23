#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
/*int main(){
int a,i=0,sum=0,b;
printf("回数入力 : ");
scanf("%d",&b);
REs:
printf("%d回目　数字(int型)を入力 : ",i+1);
scanf("%d",&a);
sum+=a;
i++;
if(i<b){
goto REs;
}
printf("%d\n",sum);
return 0;
}
*/
int t[10][10000];
int main(){
int r,c,i,j,l,sum,cnt;
while(1){
cin>>r>>c;
if(r==0&&c==0)goto RICE;
int mx=0;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
cin>>t[i][j];
}
}
for(l=0;l<(1<<r);l++){
sum=0;
for(i=0;i<c;i++){
cnt=0;
for(j=0;j<r;j++){
cnt+=(t[j][i]!=((l>>j)&0x01));
}
sum+=max(r-cnt,cnt);
}
mx=max(mx,sum);
}
printf("%d\n",mx);
}
RICE:
return 0;
}

