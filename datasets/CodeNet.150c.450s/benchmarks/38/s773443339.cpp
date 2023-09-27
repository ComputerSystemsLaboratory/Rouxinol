#include<stdio.h>
int main(){
  int n,i,j;
  int data[3];
  scanf("%d",&n); 
  for(i=0;i<n;i++){
    scanf("%d %d %d",&data[0],&data[1],&data[2]);
    for(j=0;j<2;j++){
      if(data[j]>data[j+1]){
	int temp;
	temp=data[j];
	data[j]=data[j+1];
	data[j+1]=temp;
      }
    }
    if(data[0]*data[0]+data[1]*data[1]==data[2]*data[2]){
      printf("YES\n");
    } else{
      printf("NO\n");
    }
  }
  return(0);
}