#include<stdio.h>

int main(){

int N,M,P;
while(1){

scanf("%d %d %d",&N,&M,&P);
if(N==0&&M==0&&P==0)break;

int x,s=0,y=0;
for(int i=0;i<N;i++){
scanf("%d",&x);s+=x;
if(M==i+1)y=x;

}
if(y!=0){
double t=100*s;
t=t/y*(100-P)/100;
printf("%d\n",(int)t);
}
else printf("0\n");
}
return 0;
}