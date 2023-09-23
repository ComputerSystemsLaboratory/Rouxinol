#include<stdio.h>

int main(){

int N;int A,B,SA=0,SB=0;
while(1){
SA=0,SB=0;

scanf("%d",&N);
if(N==0)break;
for(int i=0;i<N;i++){
scanf("%d %d",&A,&B);
if(A>B)SA=SA+A+B;
else if(B>A)SB=SB+A+B;
else {SA+=A;SB+=B;}
}

printf("%d %d\n",SA,SB);
}
return 0;
}