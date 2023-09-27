#include <algorithm>
#include <cstdio>
#include <cstring>

const int MAX = 20000000;
const int NIL = -1;
int tree_size = 0;
int tree[MAX + 1];

void maxHeapify(int i)
{
  int l = 2 * i;
  int r = 2 * i + 1;

  // Select the node which has the maximum key value
  int maximum_i = i;
  if (l <= tree_size && tree[l] > tree[maximum_i])
    maximum_i = l;
  if (r <= tree_size && tree[r] > tree[maximum_i])
    maximum_i = r;

  if (maximum_i != i)
  {
    // Call recursively
    std::swap(tree[i], tree[maximum_i]);
    maxHeapify(maximum_i);
  }
}

void buildMaxHeap()
{
  for (int i = tree_size / 2; i >= 1; --i)
    maxHeapify(i);
}

void replaceKey(int i, int key)
{
  tree[i] = key;
  while (i > 1 && tree[i] > tree[i / 2])
  {
    std::swap(tree[i], tree[i / 2]);
    i /= 2;
  }
}

void insertKey(int key)
{
  if (tree_size == MAX)
    return;

  ++tree_size;
  tree[tree_size] = key;
  replaceKey(tree_size, key);
}

void extractMax()
{
  if (tree_size == 0)
    return;

  printf("%d\n", tree[1]);

  // Remove root node
  tree[1] = tree[tree_size];
  --tree_size;
  maxHeapify(1);
}

int main()
{
  for (int i = 0; i < MAX; ++i)
  {
    char command[7];
    scanf("%s", command);

    if (command[0] == 'i')
    {
      int key;
      scanf("%d", &key);
      insertKey(key);
    }
    else if (command[1] == 'x')
      extractMax();
    else
      break;
  }

  return 0;
}
