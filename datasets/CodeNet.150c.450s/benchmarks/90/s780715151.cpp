#include <stdio.h>

int main(void)
{
  int i;

  int freq[100];
  for (i=0; i<100; ++i) {
    freq[i] = 0;
  }

  int n;
  int mode = 0;
  while (scanf("%d", &n) != EOF) {
    ++freq[n-1];
    mode = (mode > freq[n-1]) ? mode : freq[n-1];
  }

  for (i=0; i<100; ++i) {
    if (mode == freq[i]) {
      printf("%d\n", i + 1);
    }
  }

  return 0;
}