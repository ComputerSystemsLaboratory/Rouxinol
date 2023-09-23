#include<stdio.h>

int main(){

  int a[100],num,i,j,minj,swap,count=0;

  scanf("%d",&num);
  for(i = 0; i < num; i++){
    scanf("%d",&a[i]);
  }

  for(i = 0; i < num; i++){
    minj = i;
    for(j = i+1; j < num; j++){
      if(a[j] < a[minj]){
	  minj = j;

      }
    }

      swap =a[i];
      a[i] = a[minj];
      a[minj] = swap;
      if(i != minj){
      count++;
      }
  }

  for(i = 0; i < num-1; i++){
    printf("%d ",a[i]);
  }
  printf("%d\n",a[i]);
  printf("%d\n",count);
  return 0;
}