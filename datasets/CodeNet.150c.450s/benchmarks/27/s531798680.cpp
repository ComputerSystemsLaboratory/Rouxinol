#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
  
  node(node* r,node* l,node* p,int k){
      right = r;
      left = l;
      parent = p;
      key = k;
  }
};

typedef struct node*  Node ;
class BinaryTree{
    private: Node NIL = NULL;
    public: Node root = NIL;
    
    Node treeMinimum(Node x){
        Node min = x -> left;
        while((min != NIL) && (min = x -> left));
        return min;
    }
    
    Node treeMaximum(Node x){
        Node max = x -> right;
        while((max != NIL) && (max = x -> right));
        return max;
    }
    
    Node treeSearch(Node u, int k){
        Node r = root;
        while(r != NIL){
            if(r -> key == k) return r;
            if(k < r -> key){
                r = r -> left;
            } else{
                r = r -> right;
            }
        }
        return NIL;
    }
    
    Node treeSuccessor(Node x){
    
    
    }
    
    void treeDelete(Node z){
      Node min;
      Node c;
      if(z -> right != NIL){
          min = treeMinimum(z -> right);
          if(min != z){
              swap(z -> key,min -> key);
              free(min);
          } else{
              min -> right = NIL;
          }
      } else{
          z -> left -> parent = z -> parent;
          z -> parent -> left = z -> left;
          free(z);
      }
    }
    
    void insert(int k){
      Node y = NIL;
      Node x = root;
      Node z;
    
      z = new node(NIL,NIL,NIL,k);
      while(x != NIL){
          y = x;
          if(k < x -> key){
              x = x -> left;
          } else{
              x = x -> right;
          }
      }
      z-> parent = y;
      
      if(y != NIL){
          if(k < y -> key){
              y -> left = z;
          } else{
              y -> right = z;
          }
        } else{
              root = z;
          }
      }
    
    
    void inorder(Node u){
        if(u -> left != NIL) inorder(u -> left);
        printf(" %d",u -> key);
        if(u -> right != NIL) inorder(u -> right);
    }
    void preorder(Node u){
        printf(" %d",u -> key);
        if(u -> left != NIL) preorder(u -> left);
        if(u -> right != NIL) preorder(u -> right);
    }
};

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
  BinaryTree bt;
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      bt.insert(x);
    } else if ( com[0] == 'p' ){
      bt.inorder(bt.root);
      printf("\n");
      bt.preorder(bt.root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      bt.treeDelete(bt.treeSearch(bt.root, x));
    }
  }

  return 0;
}


