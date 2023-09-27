#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct Node{
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z -> key = k;
  z -> right = NIL;
  z -> left = NIL;

  while(x != NIL){ // xとNILのアドレスが違うかぎりループする。
    y = x;
    if(z -> key < x -> key){
      x = x -> left;
    }else{
      x = x -> right;
    }
  }
  z -> parent = y;

  if(y == NIL){ // 最初のkeyはrootにする。
    root = z;
  }else{
    if(z -> key < y -> key){
      y -> left = z;
    }else{
      y -> right = z;
    }
  }
  return;
}

void find(Node *u, int k){
  if(u == NIL){
    cout << "no" << endl;
    return;
  }else if(k == u -> key){
    cout << "yes" << endl;
    return;
  }else if(k < u -> key){
    find(u -> left, k);
  }else{
    find(u -> right, k);
  }
}

void inPerse(Node *u){
  if(u == NIL) return;
  inPerse(u -> left);
  cout << " " << u -> key;
  inPerse(u -> right);
}

void prePerse(Node *u){
  if(u == NIL) return;
  cout << " " << u -> key;
  prePerse(u -> left);
  prePerse(u -> right);
}

int main(void){
  int n, key;
  string order;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> order;
    if(order[0] == 'i'){
      cin >> key;
      insert(key);
    }else if(order[0] == 'f'){
      cin >> key;
      find(root, key);
    }else if(order[0] == 'p'){
      inPerse(root);
      cout << endl;
      prePerse(root);
      cout << endl;
    }
  }
  return 0;
}

