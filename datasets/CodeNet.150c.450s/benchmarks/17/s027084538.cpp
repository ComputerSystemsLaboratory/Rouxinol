#include<stdio.h>
int main(){
  int n,i,j;
  int data[6];
  for(i=0;i<5;i++){
    scanf("%d",&data[i]);
  }
  for(i=0;i<4;i++){
    for(j=0;j<4-i;j++){
      if(data[j]<data[j+1]){
	int temp;
	temp=data[j];
	data[j]=data[j+1];
	data[j+1]=temp;
      }
    }
  }
  for(i=0;i<5;i++){
    printf("%d",data[i]);
    if(i==4){
      printf("\n");
    } else{
      printf(" ");
    }
  }
  return(0);
}