#include <iostream>
#include <cstdio>
#include <climits>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class BinarySearchTree
{
private:
  struct Node
  {
    T key;
    Node *right, *left, *parent;
  };
  void inorder(Node *u)
  {
    if(u == NIL) return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
  }
  void preorder(Node *u)
  {
    if(u == NIL) return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
  }

public:
  Node *root, *NIL;
  BinarySearchTree()
  {
    root = new Node;
    NIL = new Node;
    NIL->parent = NIL;
    NIL->left = NIL;
    NIL->right = NIL;
    root = NIL;
  }
  ~BinarySearchTree(){}
  void insert(int k)
  {
    Node *x = root;
    Node *y = NIL;
    Node *z;
    z = new Node;
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    while(x != NIL)
    {
      y = x;
      if(z->key < x->key)
        x = x->left;
      else
        x = x->right;
    }
    z->parent = y;
    if(y == NIL)
      root = z;
    else
    {
      if(z->key < y->key)
        y->left = z;
      else
        y->right = z;
    }
  }
  bool find(int k)
  {
    Node* u = root;
    while (u != NIL && k != u->key)
    {
      if(k < u->key) u = u->left;
      else u = u->right;
    }
    return u != NIL;
  }
  void dispPre(){preorder(root);cout << endl;}
  void dispIn(){inorder(root);cout << endl;}
  void print(){dispIn();dispPre();}
};

int main()
{
  int n, x;
  string com;
  cin >> n;
  BinarySearchTree<int> T;
  for(int i = 0; i < n; i++)
  {
    cin >> com;
    if(com == "find")
    {
      cin >> x;
      cout << (T.find(x)?"yes":"no") << endl;
    }
    else if(com == "insert")
    {
      cin >> x;
      T.insert(x);
    }
    else if(com == "print")
    {
      T.print();
    }
  }
  return 0;
}