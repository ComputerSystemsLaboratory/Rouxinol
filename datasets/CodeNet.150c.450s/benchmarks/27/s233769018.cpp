#include<iostream>
#include<string>
#include "stdio.h"
#include "stdlib.h"

using namespace std;

struct Node{
  int key;
  Node* parent;
  Node* left;
  Node* right;
};

Node* NIL;
Node* root;

void insert(int input){
  Node* node_now_parent = NIL;
  Node* node_now = root;

  Node* z;
  z = (Node*) malloc(sizeof(Node));
  z->key    = input;
  z->parent = NIL;
  z->left   = NIL;
  z->right  = NIL;

  while( node_now != NIL ){
    node_now_parent = node_now;

    if(z->key <=  node_now->key){
      node_now = node_now->left;
    }else{
      node_now = node_now->right;
    }
  }

  if(node_now_parent == NIL){
    root = z;
  }else{
    if( z->key <= node_now_parent->key ){
      node_now_parent->left = z;
    }else{
      node_now_parent->right = z;
    }
    z->parent = node_now_parent;
  }
};


void preOrder(Node* node){
  if(node == NIL){
    return;
  }
  printf(" %d", node->key);
  preOrder(node->left);
  preOrder(node->right);
}

void inOrder(Node* node){
  if(node == NIL){
    return;
  }
  inOrder(node->left);
  printf(" %d", node->key);
  inOrder(node->right);
}

void print(Node* node){
  inOrder(node);
  printf("\n");
  preOrder(node);
  printf("\n");
}

int main(void){
  int N;
  scanf("%d", &N);
  
  string command;
  int key;
  for(int i=0;i<N;i++){
    cin >> command;
    if(command == "insert"){
      cin >> key;
      insert(key);
    }else if(command == "print"){
      print(root);
    }else{
      printf("No command!");
    }
  }
  return 0;
}
