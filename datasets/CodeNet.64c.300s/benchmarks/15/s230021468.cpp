#include <stdio.h>

int main(void){
  int n,a[100],i,j,minj,aa,sw=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++){
    minj=i;
    for(j=i;j<n;j++){
      if(a[j]<a[minj]){
	minj=j;
      }
    }
      aa=a[i];
      a[i]=a[minj];
      a[minj]=aa;
      if(minj!=i) sw+=1;
  }
  for(i=0;i<n;i++){
    printf("%d",a[i]);
    if(i>=n-1)
      printf("\n");
    else
      printf(" ");
  }
  printf("%d\n",sw);

  return(0);
}

