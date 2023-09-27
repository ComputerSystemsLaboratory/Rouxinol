#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

struct node{
  int key;
  node *right, *left, *parent;
};

node *root, *nil;

void insert(int k){
  node *y = nil;
  node *x = root;
  node *z;

  z = (node *)malloc(sizeof(node));
  z->key = k;
  z->left = nil;
  z->right = nil;

  while(x != nil){
    y = x;

    if(z->key < x->key) x = x->left;
    else x = x->right;

  }

    z->parent = y;

    if(y == nil) root = z;

    else{
      if(z->key < y->key) y->left = z;

      else y->right = z;

  }  
}

void inorder(node *a){
  if(a == nil) return;

  inorder(a->left);

  cout << " " << a->key;

  inorder(a->right);
}

void preorder(node *a){
  if(a == nil) return;

  cout << " " << a->key;
  
  preorder(a->left);
  preorder(a->right);
  
}

int main()
{
  int n, x;
  string s;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> s;

    if(s == "insert"){
      cin >> x;
      insert(x);
    }

    else if(s == "print"){
      inorder(root);

      cout << endl;

      preorder(root);

      cout << endl;
      
    }
  }

  return 0;

}

