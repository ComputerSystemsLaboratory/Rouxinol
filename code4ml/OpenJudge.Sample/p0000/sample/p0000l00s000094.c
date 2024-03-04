#include<stdio.h>
int main()
{

  long long int s,i,j,temp,a[20];
  for(i=0;i<10;i++)
  scanf("%lld",&a[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
           if(a[i]<a[j])
           {
               temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
      }
  }
  for(i=0;i<3;i++)
    printf("%lld\n",a[i]);

  return 0;
}