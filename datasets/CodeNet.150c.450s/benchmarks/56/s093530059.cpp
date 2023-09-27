#include <stdio.h>

int main(){
  
  int i,n;
  long max,min,sum=0;
  scanf("%d",&n);
  int a[n];

  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    sum += a[i];
  }
  max = a[1];
  for(i=1;i<=n;i++){
    if(max<a[i]) max=a[i];
  }
  min = a[1];
  for(i=1;i<=n;i++){
    if(min>a[i]) min=a[i];
  }
  printf("%ld %ld %ld\n",min,max,sum);

  return 0;
}