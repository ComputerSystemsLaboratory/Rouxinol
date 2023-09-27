#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;
struct Node{
  int value;
  Node *left;
  Node *right;
};

struct Node *NIL;

class BinarySearchTree{
  private:
    Node *root;
  public:
    BinarySearchTree(){
      root=NIL;
    }
    void insert(int value){
      Node *node = (Node*)malloc(sizeof(Node));
      node->value = value;
      node->right = NIL;
      node->left = NIL;
      Node* x=root;
      Node* y=NIL;
      while(x!=NIL){
        y = x;
        if(node->value < x->value){
          x = x->left;
        }
        else{
          x = x->right;
        }
      }
      if(y==NIL)root = node;
      else if(node->value < y->value)y->left = node;
      else y->right = node;
    }
    bool find(int value){
      Node *node = root;
      while(node != NIL){
        if(node->value == value)return true;
        else if(value < node-> value)node = node->left;
        else node = node->right;
      }
      return false;
    }
    void print(){
      inorderWalk(root);
      cout << endl;
      preorderWalk(root);
      cout << endl;
    }
    void inorderWalk(Node *node){
      if(node == NIL)return;
      inorderWalk(node->left);
      cout << ' ' << node->value;
      inorderWalk(node->right);
    }
    void preorderWalk(Node *node){
      if(node == NIL)return;
      cout << ' ' << node->value;
      preorderWalk(node->left);
      preorderWalk(node->right);
    }
};


int main(){
  int n;cin >> n;
  string com;
  BinarySearchTree T;
  for(int i=0;i<n;i++){
    cin >> com;
    if(com == "insert"){
      int num;cin >> num;
      T.insert(num);
    }
    else if(com == "print"){
      T.print();
    }
    else if(com == "find"){
      int num;cin >> num;
      cout << (T.find(num)?"yes": "no") << endl;
    }
  }
}

