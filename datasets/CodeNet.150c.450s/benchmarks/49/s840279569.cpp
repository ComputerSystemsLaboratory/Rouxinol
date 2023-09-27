#include <stdio.h>

int main(){

  int i,n,sum=0,min=1000,max=0,ave=0,x,l;
  int score[101];

  for(;;){
    scanf("%d",&n);
    if(n==0){
      break;
    }
    for(i=1;i<=n;i++){

      scanf("%d",&score[i]);

      if(max<score[i]){
	max=score[i];
	x=i;
      }

      if(min>score[i]){
	min=score[i];
	l=i;
      }
    }


    score[l]=0;
    score[x]=0;


    for(i=1;i<=n;i++){
      sum+=score[i];
    }
    ave=sum/(n-2);

    printf("%d\n",ave);

    ave=0;
    sum=0;
    min=1000;
    max=0;

  }
  return 0;
}