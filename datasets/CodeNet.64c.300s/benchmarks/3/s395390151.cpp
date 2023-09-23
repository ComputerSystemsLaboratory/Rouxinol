#include<stdio.h>
int main(){
  int n,a[101],t,i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
scanf("%d",&a[i]);
  }
  for(j=i-1;j>=0;j--){

    if(j==0){printf("%d",a[j]);
      printf("\n");}
    else printf("%d ",a[j]);

  }
  return 0;
}