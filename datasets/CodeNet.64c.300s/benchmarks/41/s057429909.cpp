#include <algorithm>
#include <cstdio>

const int MAX = 20000000;

int n, tree[MAX + 1];

void maxHeapify(int i)
{
  int l = 2 * i;
  int r = 2 * i + 1;

  // Select the node which has the maximum key value
  int maximum_i = i;
  if (l <= n && tree[l] > tree[maximum_i])
    maximum_i = l;
  if (r <= n && tree[r] > tree[maximum_i])
    maximum_i = r;

  if (maximum_i != i)
  {
    // Call recursively
    std::swap(tree[i], tree[maximum_i]);
    maxHeapify(maximum_i);
  }
}

int main()
{
  scanf("%d", &n);

  for (int i = 1; i <= n; ++i)
    scanf("%d", &tree[i]);

  for (int i = n / 2; i >= 1; --i)
    maxHeapify(i);

  for (int i = 1; i <= n; ++i)
    printf(" %d", tree[i]);
  printf("\n");

  return 0;
}
