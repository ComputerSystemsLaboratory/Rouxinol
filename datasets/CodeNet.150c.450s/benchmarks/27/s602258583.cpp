#include <bits/stdc++.h>
using namespace std;

int n;

struct Node
{
  int key;
  Node *parent, *left, *right;
};

// rootの初期化はしなくていいの?
Node *root, *NIL;

void insert(int key)
{
  // zの親を格納する
  Node *y = NIL;
  Node *x = root;

  // zの生成
  Node *z = (Node *)malloc(sizeof(Node));
  z->key = key;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL)
  {
    y = x;
    if (key < x->key)
    {
      x = x->left;
    }
    else
    {
      x = x->right;
    }
  }

  // yにはzの親が格納されている
  z->parent = y;

  if (y == NIL)
  {
    root = z;
  }
  else if (key < y->key)
  {
    y->left = z;
  }
  else
  {
    y->right = z;
  }
}

void inorder(Node *u)
{
  // ベースケース
  if (u == NIL)
  {
    return;
  }
  // 再帰ステップ
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Node *u)
{
  // ベースケース
  if (u == NIL)
  {
    return;
  }
  // 再帰ステップ
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string com;
    cin >> com;
    if (com.at(0) == 'i')
    {
      // 入力
      int key;
      cin >> key;
      insert(key);
    }
    else
    {
      // 出力
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
}
