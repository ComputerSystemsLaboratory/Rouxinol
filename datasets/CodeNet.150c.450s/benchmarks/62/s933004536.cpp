#include<stdio.h>
int main(){
  int num[3],i,j;
  for(i=0;i<3;i++){
    scanf("%d",&num[i]);
  }
  for(i=0;i<2;i++){
    for(j=0;j<2-i;j++){
      if(num[j]>num[j+1]){
	int temp=num[j];
	num[j]=num[j+1];
	num[j+1]=temp;
      }
    }
  }
  for(i=0;i<3;i++){
    if(i)printf(" ");
    printf("%d",num[i]);
  }
  printf("\n");
  return(0);
}