#include <cstdio>
#include <vector>
using namespace std;
#define Nil -1

struct Tree
{
  int parent, left, right;
};

void preorderPrint(int id, Tree t[])
{
  printf(" %d", id);
  if (t[id].left != Nil)
    preorderPrint(t[id].left, t);
  if (t[id].right != Nil)
    preorderPrint(t[id].right, t);
}

void inorderPrint(int id, Tree t[])
{
  if (t[id].left != Nil)
    inorderPrint(t[id].left, t);
  printf(" %d", id);
  if (t[id].right != Nil)
    inorderPrint(t[id].right, t);
}

void postorderPrint(int id, Tree t[])
{
  if (t[id].left != Nil)
    postorderPrint(t[id].left, t);
  if (t[id].right != Nil)
    postorderPrint(t[id].right, t);
  printf(" %d", id);
}

int main()
{
  int n;
  Tree trees[25];
  scanf("%d", &n);

  for (int i = 0; i < 25; i++)
    trees[i].parent = trees[i].left = trees[i].right = Nil;

  for (int i = 0; i < n; i++)
  {
    int id, left, right;
    scanf("%d%d%d", &id, &left, &right);
    trees[id].left = left;
    trees[id].right = right;
    if (left != Nil)
      trees[left].parent = id;
    if (right != Nil)
      trees[right].parent = id;
  }

  int root;
  for (int i = 0; i < n; i++)
    if (trees[i].parent == -1)
      root = i;

  printf("Preorder\n");
  preorderPrint(root, trees);
  printf("\n");
  printf("Inorder\n");
  inorderPrint(root, trees);
  printf("\n");
  printf("Postorder\n");
  postorderPrint(root, trees);
  printf("\n");

  return 0;
}