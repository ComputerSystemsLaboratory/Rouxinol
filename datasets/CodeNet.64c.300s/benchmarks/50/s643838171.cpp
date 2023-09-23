#include <stdio.h>

int main(void){
  int a[100],n,flag,j,i,x=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  flag=1;
  while(flag){
    flag=0;
    for(j=n-1;j>=1;j--){
      if(a[j]<a[j-1]){
	i=a[j];a[j]=a[j-1];a[j-1]=i;
	flag=1;
	x++;
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d",a[i]);
    if(i<n-1)
      printf(" ");
    else
      printf("\n");
  }
  printf("%d\n",x);
  
  return(0);
}

