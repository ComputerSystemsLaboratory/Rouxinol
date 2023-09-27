#include<iostream>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define MAX_V 500000
using namespace std;
struct node{
  int id,key;
  node *parent,*left,*right;
  node():key(0),parent(NULL),left(NULL),right(NULL){}
};
node nodes[MAX_V]{};
int id=0;
node* make_binary_tuple(int key){
  nodes[id].key=key;
  return &nodes[id++];
}

void printPreorder(node* n){
  cout<<" "<<n->key;
  if(n->left!=NULL) printPreorder(n->left);
  if(n->right!=NULL) printPreorder(n->right);
}
void printInorder(node* n){
  if(n->left!=NULL) printInorder(n->left);
  cout<<" "<<n->key;
  if(n->right!=NULL) printInorder(n->right);
}

node* tree_insert(node* root, int key){
  node* z=make_binary_tuple(key);
  node* y=NULL;
  node* x=root;
  while(x!=NULL){
    y=x;
    if(z->key<x->key)
      x=x->left;
    else
      x=x->right;
  }
  z->parent=y;
  if(y==NULL)
    root=z;
  else if(z->key<y->key)
    y->left=z;
  else
    y->right=z;
  return root;
}

int main(){
  node* root=NULL;
  int n; cin>>n;
  REP(i,n){
    string s; cin>>s;
    if(s=="insert"){
      int key; cin>>key;
      root = tree_insert(root,key);
    } else if(s=="print"){
      printInorder(root); cout<<"\n";
      printPreorder(root); cout<<"\n";
    }
  }
}