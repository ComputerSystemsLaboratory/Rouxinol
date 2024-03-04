#include <stdio.h>

main()
{
  int a,b,ans=0;
  int i=0;

  while(scanf("%d%d",&a,&b) == 2 )
    {
      ans = a + b;
      while(1)
	{
	  if(ans == 0) break;
	  i++;
	  ans /= 10;
	}
      printf("%d\n",i);
      i = 0;
    }
  return 0;
}