#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

typedef struct Node{
  int value;
  Node *parent, *left, *right;
} Node;

Node *NIL, *root;

void insert(int k){
  Node *y = NIL, *x = root, *z;

  z = (Node *)malloc(sizeof(Node));
  z->value = k;
  z->left = z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->value < x->value) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if(y == NIL) root = z;
  else if(z->value < y->value) y->left = z;
  else y->right = z;
}

void preParse(Node *node){
  if(node == NIL) return ;

  cout << " " << node->value;
  if(node->left != NIL) preParse(node->left);
  if(node->right != NIL) preParse(node->right);
}

void inParse(Node *node){
  if(node == NIL) return ;

  if(node->left != NIL) inParse(node->left);
  cout << " " << node->value;
  if(node->right != NIL) inParse(node->right);
}

int main(){

  int n, key;
  string command;

  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> command;
    if(command == "insert"){
      cin >> key;
      insert(key);
    }else if(command == "print"){
      inParse(root);
      cout << endl;
      preParse(root);
      cout << endl;
    }
  }

  return 0;
}

