#include <stdio.h>

int main(){
  int a[10],i,j,k,t;

  for(i=0;i<10;i++){
     scanf("%d",&a[i]);
  }

  for (k = 0;k < 3; k++)
    for (j= 9; j>k;j--)
      if (a[j-1] < a[j]){
        t = a[j];a[j] = a[j-1];a[j-1] = t;
      }

  printf("%d\n",a[0]);
  printf("%d\n",a[1]);
  printf("%d\n",a[2]);

}