#include<stdio.h>

#define MAX 100

int main(void){

  int array[MAX] = {0};
  int i;
  int count = 0;

  while(scanf("%d",&i) != EOF){
    array[i]++;

    if(array[i] > count)
      count = array[i];
  }

  for(i=0;i<MAX;i++){
    if(array[i] == count)
      printf("%d\n",i);
  }
  return 0;
}