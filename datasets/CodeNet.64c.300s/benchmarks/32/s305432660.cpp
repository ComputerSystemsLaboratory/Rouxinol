#include <stdio.h>

int main(){
  int n,a[10001],i;
  int min,max;
  long long sum=0;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
  min=a[0];
  max=a[0];
  for(i=0; i<n; i++){
    if(min>a[i])min=a[i];
    if(max<a[i])max=a[i];
    sum+=a[i];
  }
  printf("%d %d %ld\n",min,max,sum);
  return 0;
}