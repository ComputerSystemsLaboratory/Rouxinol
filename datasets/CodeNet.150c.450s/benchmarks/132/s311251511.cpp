#include <stdio.h>
int main()
{
  int i=0, l,  p, q, j=0;
  int d[50];
 
  while(1)
    {
      for ( i = 0; i < 50; i++)
    {
      d[i] = 0;
    }   
      scanf("%d %d", &l, &p);
      if( l == 0 && p == 0 ) break;
      q = p;
      while(1)
    {
          if ( i >= l ) i = 0;
      if ( p > 0 )
        {
          d[i] += 1;
          p--;
          if ( d[i] == q && p == 0)
        {
          break;
        }  
        }
      else if ( p == 0 )
        {
          p = d[i];
          d[i] = 0;
        }
      i++;
    }
      printf("%d\n", i);
    }
  return 0;
}