#include<stdio.h>
int main()
{
    int a[10],k,i,j,temp;
    for(k=0;k<10;k++)
    {
        scanf("%d",&a[k]);
    }
    for(i=10-2;i>=0;i--){
      for(j=0;j<=i;j++){
           if(a[j]>a[j+1]){
               temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
           }
      }
  }
  for(i=9;i>=7;i--)
      printf("%d\n",a[i]);
    return 0;
}