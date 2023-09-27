#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Node {int key; Node *l, *r, *p;};
Node *root, *NIL;

void inorder(Node *u)
{
  if(u == NIL) return ;
  inorder(u->l);
  printf(" %d", u->key);
  inorder(u->r);
}

void preorder(Node *u)
{
  if(u == NIL) return ;
  printf(" %d", u->key);
  preorder(u->l);
  preorder(u->r);
}

void insertkey(int k)
{
  Node *x, *y, *z;
  x = root;
  y = NIL;
  z = (Node*)malloc(sizeof(Node));
  z->key = k;
  z->l = z->r = NIL;
  while(x != NIL)
  {
    y = x;
    if(z->key < x->key)
      x = x->l;
    else x = x->r;
  }
  z->p = y;
  if(y == NIL)
    root = z;
  else
  {
    if(z->key < y->key)
      y->l = z;
    else y->r = z;
  }
}

void output()
{
  inorder(root);  printf("\n");
  preorder(root); printf("\n");
}

Node* findkey(int k)
{
  Node *x = root;
  while(x != NIL && x->key != k)
  {
    if(k < x->key)
      x = x->l;
    else x = x->r;
  }
  return x;
}

int main()
{
  int m, k;
  Node *x = NIL;
  scanf("%d", &m);
  string s;
  for(int i=0; i<m; i++)
  {
    cin >> s;
    if(s == "insert")
    {
      scanf("%d", &k); insertkey(k);
    }
    else if(s == "find")
    {
      scanf("%d", &k);
      x = findkey(k);
      if(x == NIL) printf("no\n");
      else printf("yes\n");
    }
    else output();
  }

  return 0;
}

