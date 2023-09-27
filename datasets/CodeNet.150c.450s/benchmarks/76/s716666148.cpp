#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

using namespace std;

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;

Node treeSearch(Node x, int k){
  while(x != NIL && k != x->key){
    if(k < x->key) x = x->left;
    else x = x->right;
  }
  return x;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = (Node)malloc(sizeof(struct node));
  z->key = k;
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

void inorder(Node x){
  if(x == NIL) return;
  inorder(x->left);
  cout << " " << x->key;
  inorder(x->right);
}
void preorder(Node x){
  if(x == NIL) return;
  cout << " " << x->key;
  preorder(x->left);
  preorder(x->right);
}

bool find(int k){
  Node x = treeSearch(root, k);
  return x != NIL;
}

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      if(find(x)) cout << "yes" <<endl;
      else cout << "no" << endl;
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}
