#include<stdio.h>

int main(){
  int num,x,count[1000];
  int a,i,j,k,l;
  int n[3];
  for(a=0;a<1000;a++){
    scanf("%d %d",&num,&x);
    count[a]=0;
    for(l=0;l<3;l++){
      n[l]=0;
    }
    if(num==0&&x==0){
      break;
    }
    for(i=1;i<=num;i++){
      for(j=i+1;j<=num;j++){
        for(k=j+1;k<=num;k++){
          if(i+j+k==x&&i!=j&&j!=k&&k!=i){
            if(n[0]==0&&n[1]==0&&n[2]==0){
              n[0]=i;
              n[1]=j;
              n[2]=k;
              count[a]++;
            }
            else{
              for(l=0;l<3;l++){
                if(n[l]!=i&&n[l]!=j&&n[l]!=k){
                  n[0]=i;
                  n[1]=j;
                  n[2]=k;
                  count[a]++;
                }
              }
            }
          }
        }
      }
    }
  }
  for(i=0;i<a;i++){
    printf("%d\n",count[i]);
  }
  return 0;
}