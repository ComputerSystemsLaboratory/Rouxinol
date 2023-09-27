#include <algorithm>

#include <stdio.h>
#include <string.h>

int n;

int memo[4 + 1][50 + 1];

int search(int i, int j)
{
  if (memo[i][j] >= 0)
    return memo[i][j];

  if (j > i * 9)
    return memo[i][j] = 0;

  if (i == 1)
    return memo[i][j] = 1;

  int c = 0;

  for (int k = 0; k <= j && k <= 9; k ++)
    c += search(i - 1, j - k);

  return memo[i][j] = c;
}

int main(int argc, char** argv)
{
  while (fscanf(stdin, "%d", &n) == 1) {
    memset(memo, -1, sizeof(memo));
    
    fprintf(stdout, "%d\n", search(4, n));
  }
}