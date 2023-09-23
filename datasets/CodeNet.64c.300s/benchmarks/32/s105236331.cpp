#include <stdio.h>

int	 main(void)
{
  long int n,i,ai;
  long int sum=0;
  long int min=10000000;
  long int max=-10000000;
  
  scanf("%ld",&n);

  for(i=0; i<n; i++){
    scanf("%ld",&ai);
    sum = sum + ai;
    if(ai > max)
      max = ai;
    if(ai < min)
      min = ai;
  }

  printf("%ld %ld %ld\n",min,max,sum);
  
  return(0);
}