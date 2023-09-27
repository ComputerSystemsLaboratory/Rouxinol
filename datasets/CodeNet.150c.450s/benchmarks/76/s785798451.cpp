#include <iostream>
#include <string>
#define NIL 0
using namespace std;

struct BTNode{
  int key;
  BTNode *parent;
  BTNode *left;
  BTNode *right;
};

BTNode *root = NIL;

void insert(int value){
  BTNode *x = root;
  BTNode *y = NIL;
  BTNode *z = new BTNode;
  z->key = value;
  z->left = NIL;
  z->right = NIL;
  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

BTNode* find(BTNode *x, int k){
  while(x != NIL && x->key != k){
    if(x->key > k) x = x->left;
    else x = x->right;
  }
  return x;
}

void inorder(BTNode *x){
  if(x == NIL) return;
  inorder(x->left);
  cout << " " << x->key;
  inorder(x->right);
}

void preorder(BTNode *x){
  if(x == NIL) return;
  cout << " " << x->key;;
  preorder(x->left);
  preorder(x->right);
}

int main(){
  int n, v;
  string cmd;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> cmd;
    if(cmd == "insert"){
      cin >> v;
      insert(v);
    }
    else if(cmd == "find"){
      cin >> v;
      if(find(root, v)) cout << "yes" << endl;
      else cout << "no" << endl;
    }
    else if(cmd == "print"){
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
  return 0;
}

