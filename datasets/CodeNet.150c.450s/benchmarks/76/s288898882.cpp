#include <bits/stdc++.h>
using namespace std;

#define NIL -1
#define MAX 25

class Node{
public:
  int key;
  Node* parent;
  Node* left;
  Node* right;

  Node(){
    parent = NULL;
    left = NULL;
    right = NULL;
  }
};

Node* root = NULL;

void preOrder(Node* n){
  printf(" %d",n->key);
  if(n->left != NULL) preOrder(n->left);
  if(n->right != NULL) preOrder(n->right);
};

void inOrder(Node* n){
  if(n->left != NULL) inOrder(n->left);
  printf(" %d",n->key);
  if(n->right != NULL) inOrder(n->right);
}

void insert(int k){
  Node* n = root;
  Node* new_node = new Node;
  new_node->key = k;

  if(root == NULL){
    root = new_node;
    return;
  }

  while(true){
    if(k < n->key){
      if(n->left != NULL) n = n->left;
      else{
        n->left = new_node;
        new_node->parent = n;
        return;
      }
    }
    else{
      if(n->right != NULL) n = n->right;
      else{
        n->right = new_node;
        new_node->parent = n;
        return;
      }
    }
  }
}

Node* find(int key){
  Node* n = root;

  while(n != NULL){
    if(n->key == key) break;
    n = (key < n->key) ? n->left : n->right;
  }

  return n;
}

int main(){

  int n;
  scanf("%d", &n);

  char c[10];
  int key;
  for(int i=0; i<n; i++){
    scanf("%s",c);
    if(c[0] == 'i'){
      scanf("%d",&key);
      insert(key);
    }
    else if(c[0] == 'p'){
      inOrder(root); printf("\n");
      preOrder(root);printf("\n");
    }
    else{
      scanf("%d",&key);
      if(find(key) != NULL) printf("yes\n");
      else printf("no\n");
    }
  }

  return 0;
}

