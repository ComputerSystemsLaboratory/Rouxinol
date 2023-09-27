#include <cstdio>
#include <cstdlib>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

Node treeMinimum(Node x){

  while(x->left != NIL){
      x = x->left;
    }

  return x;
}

Node treeMaximum(Node x){

  while(x->right != NIL){
    x = x->right;
  }

  return x;
}

Node treeSearch(Node u, int k){
  Node x;

  x = u;
  while(x != NIL){
    if(k < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
    if(k == x->key) return x;
  }

  return NIL;
}

Node treeSuccessor(Node x){
  Node y;

  if(x->right != NIL) return treeMinimum(x->right);

  y = x->parent;
  return y;
}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y



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
    else x = x-> right;
  }
  z->parent = y;

  if(y == NIL) root = z;
  else{
    if(z->key < y->key) y->left = z;
    else y->right = z;
  }
}

Node find (Node u,int k){
  while(u != NIL && k != u->key){
    if(k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

void inorder(Node u){

  if(u == NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(Node u){

  if(u == NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }else if(com[0] == 'f'){
      scanf("%d",&x);
      Node t = find(root,x);
      if(t != NIL) printf("yes\n");
      else printf("no\n");
    }
  }

  return 0;
}

