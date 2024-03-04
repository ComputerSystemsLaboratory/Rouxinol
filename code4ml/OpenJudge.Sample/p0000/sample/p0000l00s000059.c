#include <stdio.h>

int main(void)
{
  int a[10] = {0};
  int i;
  int j;
  
  for (i=0; i <= 9; i++)
    scanf("%d", &a[i]);
  
  
  for ( i = 0; i <= 8; i++ )
    {
      for( j = i+1; j <= 9; j++ )
	{
	  if ( a[i] < a[j] )
	    {
	      int temp = 0;
	      temp = a[j];
	      a[j] = a[i];
	      a[i] = temp;
	    }
	}
    }
  
  for (i=0; i <= 2; i++)
    printf("%d\n", a[i]);
  
  return 0;
  
}