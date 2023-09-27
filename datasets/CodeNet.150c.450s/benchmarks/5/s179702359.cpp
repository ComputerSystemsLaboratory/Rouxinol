#include <stdio.h>
int main(){
  int a[100],i,j,k;
  scanf("%d",&i);
  for(j=i;j>0;j--){
    scanf("%d",&a[j]);
  }
  for(k=1;k<i+1;k++){
    if(k == i){
    printf("%d\n",a[k]);
    }
    else{
      printf("%d ",a[k]);
    }
  }
  return 0;
}