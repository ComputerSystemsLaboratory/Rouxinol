#include<cstdio>
#include<string>
#include<cstdlib>
#include<iostream>
using namespace std;

struct Node{
  struct Node *right;
  struct Node *left;
  struct Node *parent;
  int key;
};
//#define NIL NULL

Node *root, *NIL;

/*Node treeMinimum(Node x){


}

Node treeMaximum(Node x){


}

Node treeSearch(Node u, int k){


}

Node treeSuccessor(Node x){


}

void treeDelete(Node z){
  Node y; // node to be deleted                                                \
                                                                                
  Node x; // child of y                                                        \
                                                                                



}*/

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z =(Node*) malloc(sizeof(struct Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while( x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }else{
      x = x->right;
    }
  }
  z->parent = y;

  if(y == NIL){
    root = z;
  }else if(z->key < y->key){
    y->left = z;
  }else{
    y->right = z;
  }


}

void inorder(Node *u){
  if(u == NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);

}
void preorder(Node *u){
  if(u == NIL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);

}


int main(){
  int n, i, x;
  string com;
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    cin >> com;
    //if ( com[0] == 'f' ){
      //scanf("%d", &x);
      //Node t = treeSearch(root, x);
      //if ( t != NIL ) printf("yes\n");
      //else printf("no\n");
    //}
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } //else if ( com[0] == 'd' ){
      //scanf("%d", &x);
      //treeDelete(treeSearch(root, x));
    //}
  }

  return 0;
}



