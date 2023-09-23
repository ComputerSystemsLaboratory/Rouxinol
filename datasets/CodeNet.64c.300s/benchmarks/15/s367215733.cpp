#include<stdio.h>

int main(){
  int n, array[100], i, j, tmp, min, count=0;
  scanf("%d", &n);
  for(i=0;i<=n-1;i++)scanf("%d",&array[i]);
  for(i=0;i<=n-1;i++){
    min = i;
    for(j=i;j<=n-1;j++)if(array[j]<array[min])min=j;
    if(min!=i){
      tmp = array[i];
      array[i] = array[min];
      array[min] = tmp;
      count++;
    }
  }
  for(i=0;i<=n-1;i++){
    if(i>=1)printf(" ");
    printf("%d", array[i]);
  }
  printf("\n");
  printf("%d\n", count);
  return 0;
}