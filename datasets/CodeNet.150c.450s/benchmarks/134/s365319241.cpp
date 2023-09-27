#include <stdio.h>
#define MAX 10000
#define NIL -1

struct Node
{
  int parent, left, right;
};

Node T[MAX];
int n;

void preParse(int u)
{
  if (u == NIL)
  {
    return;
  }
  printf(" %d", u);
  preParse(T[u].left);
  preParse(T[u].right);
}

void inParse(int u)
{
  if (u == NIL)
  {
    return;
  }
  inParse(T[u].left);
  printf(" %d", u);
  inParse(T[u].right);
}

void postParse(int u)
{
  if (u == NIL)
  {
    return;
  }
  postParse(T[u].left);
  postParse(T[u].right);
  printf(" %d", u);
}

int main()
{
  int id, left, right;

  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    T[i].parent = NIL;
  }

  for (int i = 0; i < n; i++)
  {
    scanf("%d %d %d", &id, &left, &right);
    T[id].left = left;
    T[id].right = right;
    if (left != NIL)
    {
      T[left].parent = id;
    }
    if (right != NIL)
    {
      T[right].parent = id;
    }
  }

  int root;
  for (int i = 0; i < n; i++)
  {
    if (T[i].parent == NIL)
    {
      root = i;
    }
  }

  printf("Preorder\n");
  preParse(root);
  printf("\n");
  printf("Inorder\n");
  inParse(root);
  printf("\n");
  printf("Postorder\n");
  postParse(root);
  printf("\n");

  return 0;
}
