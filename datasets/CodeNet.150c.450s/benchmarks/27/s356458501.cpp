#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

struct Node{
  int key;
  Node* left;
  Node* right;
  Node(){
    left = right = NULL;
  }
};

class Tree{
  Node* root = NULL;
  public:
  void insert(Node* n){
    Node* y = NULL;
    Node* x = root;
    while(x!=NULL){
      y = x;
      if(n->key < x->key){
        x = x->left;
      }else{
        x = x->right;
      }
    }
    if(y==NULL){
      root = n;
    }else if(n->key < y->key){
      y->left = n;
    }else{
      y->right = n;
    }
  }

  void print(){
    print_inorder(root);
    printf("\n");
    print_preorder(root);
    printf("\n");
  }

  void print_preorder(Node* n){
    if(n==NULL) return;
    printf(" %d",n->key);
    print_preorder(n->left);
    print_preorder(n->right);
  }
  void print_inorder(Node* n){
    if(n==NULL) return;
    print_inorder(n->left);
    printf(" %d",n->key);
    print_inorder(n->right);
  }

};

int main(){
  int n;cin>>n;
  Tree t;
  for(int i=0;i<n;i++){
    string ope; cin>>ope;
    if(ope=="insert"){
      int k; cin>>k;
      Node* node = new Node();
      node->key = k; 
      t.insert(node);
    }else if(ope=="print"){
      t.print(); 
    }
  }
  return 0;
}