#include<stdio.h>

int main(){

  int flag,a[100],i,num,swap,count=0;
  
  scanf("%d",&num);
  for(i = 0; i < num; i++){
    scanf("%d",&a[i]);
  }

  flag=1;
  while(flag){
    flag=0;

    for(i = num-1; i >= 1; i--){
      if(a[i]<a[i-1]){
	swap  =  a[i];
	a[i]  =  a[i-1];
	a[i-1] = swap;
	count ++;
	flag = 1;
      }
    }

  }
  for(i = 0; i < num-1; i++){
    printf("%d ",a[i]);
  }
  printf("%d\n",a[i]);
  printf("%d\n",count);
  return 0;
}