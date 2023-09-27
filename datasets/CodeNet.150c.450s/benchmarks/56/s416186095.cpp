#include <stdio.h>
#include <float.h> 
int main(void){	
  int n;	
  long long a[10000];	
  long long i,max,min,sum; 
  scanf("%d",&	n);
  for(i=0 ; i<n ;i++){
    scanf("%lld",&a[i]);
  }
  max = a[0];
  min = a[0];
  sum = 0;
  for(i=0 ; i<n ; i++){
    if(a[i] >= max){
      max = a[i];
    }
    if(a[i] <= min){
      min = a[i];
    }
    sum += a[i];
  }
  printf("%lld %lld %lld\n",min,max,sum);
  return 0;
}