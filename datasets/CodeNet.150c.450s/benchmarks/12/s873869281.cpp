#include <cstdio>

int main()
{
  int n;
  scanf("%d", &n);

  int heap[n + 1];
  for (int i = 1; i <= n; ++i)
    scanf("%d", &heap[i]);

  for (int i = 1; i <= n; ++i)
  {
    printf("node %d: ", i);
    printf("key = %d, ", heap[i]);
    if (i > 1)
      printf("parent key = %d, ", heap[i / 2]);
    if (2 * i <= n)
      printf("left key = %d, ", heap[2 * i]);
    if (2 * i + 1 <= n)
      printf("right key = %d, ", heap[2 * i + 1]);
    printf("\n");
  }

  return 0;
}
