#include <stdio.h>
 
int main() {
 
  int n,a[100] = {0};
  int i,j,k,l;
  int sum;
  int suma[30];
  j = 0;
  while(1) {
 int max = -1;
  int min = 10001;
   sum = 0;
 
  scanf("%d",&n);
  if(n == 0){
    break ;}
 
  for(i=0;i<n;i++) {
 
    scanf("%d",&a[i]);
    sum = sum + a[i];
    if(min > a[i] ) {
      min = a[i];
    } if( max < a[i]) {
      max  = a[i];
    }
  } 
 sum = (sum-max-min) / (n-2);
 suma[j] = sum;
 j++;
 
  }
 
  //  printf("sum = %d\n",sum);
  // printf("max = %d min = %d",max,min);
 
  for(i = 0; i < j; i++) {
 
  printf("%d\n",suma[i]);
   
  }
 
  return 0;
 
}