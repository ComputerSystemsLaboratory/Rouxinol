#include <stdio.h>

int main()
{
  int y, d, m;
  int h;
  char *date[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

  for(;;)
    {
      int Y, C, G;
      y = 2004;
      scanf("%d %d", &m, &d);

      if(d == 0 || m == 0) break;
      if(m == 1 || m == 2)
	{
	  m += 12;
	  y--;
	}

      Y = y%100;
      C = y/100;
      G = 5*C + C/4;

      h = (d + (26*(m + 1)/10) + Y + Y/4 + G)%7;
      printf("%s\n", date[h]);
    }

  return 0;
}