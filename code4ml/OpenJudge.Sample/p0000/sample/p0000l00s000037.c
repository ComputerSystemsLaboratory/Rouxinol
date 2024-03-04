#include <stdio.h>

int main()
{
  int i,j,t,x,n=10;
  int data[10];

  for (i=0;i<10;i++){
    scanf("%d",&data[i]);
  }

  for(i=0;i<10;i++){
    for(j=n-1;i<j;j--){
      if (data[j]>data[j-1]){
        t=data[j];
        data[j]=data[j-1];
        data[j-1]=t;
      }
    }
  }


  for(i=0;i<3;i++){
    printf("%d\n",data[i]);
  }

  return 0;
}