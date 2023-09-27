#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Node
{
  int key;
  Node *parent, *left, *right;
};

Node *root, *nil;

void insert(int i)
{
  Node *n = (Node *)malloc(sizeof(Node));
  n->key = i;
  n->left = nil;
  n->right = nil;

  Node *node = root;
  Node *parent = nil;
  while (node != nil)
  {
    parent = node;
    if (n->key < node->key)
      node = node->left;
    else
      node = node->right;
  }
  n->parent = parent;

  if (parent == nil)
    root = n;
  else if (n->key < parent->key)
    parent->left = n;
  else
    parent->right = n;
}

bool contains(Node *n, int i)
{
  if (n == nil)
    return false;
  if (n->key == i)
    return true;

  if (i < n->key)
    return contains(n->left, i);
  else
    return contains(n->right, i);
}

void preorderPrint(Node *n)
{
  if (n == nil)
    return;
  printf(" %d", n->key);
  preorderPrint(n->left);
  preorderPrint(n->right);
}

void inorderPrint(Node *n)
{
  if (n == nil)
    return;
  inorderPrint(n->left);
  printf(" %d", n->key);
  inorderPrint(n->right);
}

int main()
{
  int m, num;
  char order[7];
  scanf("%d", &m);

  for (int i = 0; i < m; i++)
  {
    scanf("%s", order);
    if (order[0] == 'i')
    {
      scanf("%d", &num);
      insert(num);
    }
    else if (order[0] == 'f')
    {
      scanf("%d", &num);
      if (contains(root, num))
        printf("yes\n");
      else
        printf("no\n");
    }
    else
    {
      inorderPrint(root);
      printf("\n");
      preorderPrint(root);
      printf("\n");
    }
  }

  return 0;
}