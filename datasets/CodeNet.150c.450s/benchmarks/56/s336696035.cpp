#include<stdio.h>

int main(void)

{

 int n,x,min,max;

 long sum;


 int i;


 scanf("%d %d",&n,&x);

 min=max=sum=x;


 for(i=1; i<n; i++){

  scanf("%d",&x);

  sum +=x;


  if(max<x)


   max=x;


  if(min>x)


   min=x;


  }


  printf("%d %d %ld\n",min,max,sum);


 return 0;


}


 


 