#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Node{
  int key;
  Node *parent, *left, *right;
};

Node *nil;

class BinaryTree{
public:
  BinaryTree(){root = new Node; root = nil;}
  ~BinaryTree(){delete root;}
  void Preorder(Node *x);
  void Inorder(Node *x);
  void Postorder(Node *x);
  void insert(int key);

  Node *root;
};


void BinaryTree::insert(int key){
  Node *y = nil;
  Node *x = root;
  Node *z = new Node;
  // Node *z;
  // z = (Node *)malloc(sizeof(Node));
  z->key = key;
  z->left = nil;
  z->right = nil;

  while(x != nil){
    y = x;
    if(key > x->key){
      x = x->right;
    }
    else{
      x = x->left;
    }
  }
  z->parent = y;
  if(y == nil) root = z;
  else{
    if(key > y->key) y->right = z;
    else y->left = z;
  }
}

void BinaryTree::Preorder(Node *x){
  if(x == nil) return;
  cout << " " << x->key;
  Preorder(x->left);
  Preorder(x->right);
}

void BinaryTree::Inorder(Node *x){
  if(x == nil) return;
  Inorder(x->left);
  cout << " " << x->key;
  Inorder(x->right);
}

void BinaryTree::Postorder(Node *x){
  if(x == nil) return;
  Postorder(x->left);
  Postorder(x->right);
  cout << " " << x->key;
}

int main(){
  int n;
  cin >> n;
  string com;
  BinaryTree BT;
  int k;
  for(int i=0;i<n;i++){
    cin >> com;
    if(com == "insert"){
      scanf("%d", &k);
      // cin >> k;
      BT.insert(k);
    }
    else if(com == "print"){
      BT.Inorder(BT.root);
      cout << endl;
      BT.Preorder(BT.root);
      cout << endl;
    }
  }
  return 0;
}

