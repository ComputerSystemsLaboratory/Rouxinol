#include<stdio.h>
int main(){
  int n,c,i,j,a[4][14]={0};
  char b;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c %d",&b,&c);
    if(b=='S'){
      a[0][c]=1;
    }if(b=='H'){
      a[1][c]=1;
    }if(b=='C'){
      a[2][c]=1;
    }if(b=='D'){
      a[3][c]=1;
    }
  }
  for(i=0;i<4;i++){
    for(j=1;j<=13;j++){
      if(a[i][j]==0){
    if(i==0){
      printf("S %d\n",j);
    }if(i==1){
      printf("H %d\n",j);
    }if(i==2){
      printf("C %d\n",j);
    }if(i==3){
      printf("D %d\n",j);
    }
      }
    }
  }
  return(0);
}