#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>


using namespace std;
struct Node
{
  int key;
  Node *parent, *left, *right;
};

Node *root;

void insert(int k)
{
  Node *y = NULL;  //parent of the node to be inserted
  Node *x = root; //traverse the tree
  Node *z = new Node;
  z->key = k;
  z->left = NULL;
  z->right = NULL;

  //find the parent of z
  while (x != NULL)
  {
    y = x;
    if (z->key < x->key)
    {
      x = x->left;
    }
    else
    {
      x = x->right;
    }
  }

  z->parent = y;

  if (y == NULL)
  {
    root = z; //handle the case of z being the first inserted node
  }
  else
  {
    if (z->key < y->key)
    {
      y->left = z;
    }
    else
    {
      y->right = z;
    }
  }
}

void inorder(Node *u)
{
  if (u == NULL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Node *u)
{
  if (u == NULL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int main()
{
  int n, x;
  string com;
  scanf("%d", &n);

  while (n--)
  {
    cin >> com;
    if (com == "insert")
    {
      scanf("%d", &x);
      insert(x);
    }
    else if (com == "print")
    {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

