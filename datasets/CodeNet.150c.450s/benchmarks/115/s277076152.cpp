#include<stdio.h>

int hantei(char x[], char y[]) {
  int xn = 0, yn = 0, flag = 0, i, j, max = 0;
  int c[1001][1001];
  
  while (flag == 0)
  {
    if (x[xn] != '\0')
    {
      xn++;
    }
    else
    {
      flag = 1;
    }
  }
  
  flag = 0;
  
  while (flag == 0)
  {
    if (y[yn] != '\0')
    {
      yn++;
    }
    else
    {
      flag = 1;
    }
  }
  for (i = 1; i < xn + 1; i++) c[i][0] = 0;
  for (j = 1; j < yn + 1; j++) c[0][j] = 0;
  
  for (i = 1; i < xn + 1; i++)
  {
    for (j = 1; j < yn + 1; j++)
    {
      if (x[i - 1] == y[j - 1])
      {
        c[i][j] = c[i - 1][j - 1] + 1;
      }
      else if (c[i - 1][j] >= c[i][j - 1])
      {
        c[i][j] = c[i - 1][j];
      }
      else
      {
        c[i][j] = c[i][j - 1];
      }
      if (max < c[i][j]) max = c[i][j];
    }
  }
  
  return max;
}

int main(void) {
  char x[1000], y[1000];
  int q, i;
  
  scanf("%d", &q);
  
  for (i = 0; i < q; i++)
  {
    scanf("%s", x);
    scanf("%s", y);
    printf("%d\n", hantei(x, y));
  }
  
  return 0;
}