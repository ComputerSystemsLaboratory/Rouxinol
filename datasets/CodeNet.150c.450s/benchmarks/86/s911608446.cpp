#include <stdio.h>
int main(){
  int total=0;
  int N,M,P,i,k,h;
  int box[100];
  while(1){
    scanf("%d %d %d",&N,&M,&P);
    if(N==0&&M==0&&P==0) break;
    else{
      total=0;
    for(i=0;i<N;i++){
      scanf("%d",&box[i]);
      total+=box[i]*100;
    }
    k=total*(100-P)/100;
    if(box[M-1]!=0){
    h=k/box[M-1];
    printf("%d\n",h);
    }
    if(box[M-1]==0) 
    printf("0\n");
  }
  }
  return 0;
}