#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
  int key;
  node *parent,*left,*right;
};
node *NIL,*root;
void insert(int x){
  node *n,*r=root,*m=NIL;
  n=(node *)malloc(sizeof(node));
  n->key=x; n->left=NIL; n->right=NIL;
  while(r!=NIL){
    m=r;
    if(n->key<r->key) r=r->left;
    else r=r->right;
  }
  n->parent=m;
  if(m==NIL) root=n;
  else{
    if(n->key<m->key) m->left=n;
    else m->right=n;
  }
}
void inorder(node *p){
  if(p!=NIL){
    inorder(p->left);
    cout<<" "<<p->key;
    inorder(p->right);
  }
}
void preorder(node *p){
  if(p!=NIL){
    cout<<" "<<p->key;
    preorder(p->left);
    preorder(p->right);
  }
}
int find(int x){
  node *r=root;
  while(r!=NIL){
    if(r->key==x) return 1;
    if(r->key<x) r=r->right;
    else r=r->left;
  }
  return 0;
}
int main(){
  int n,x;
  char s[7]; cin>>n;
  for(int i=0;i<n;++i){
    cin>>s;
    if(s[0]=='i'){
      cin>>x;
      insert(x);
    }else if(s[0]=='p'){
      inorder(root);
      cout<<endl;
      preorder(root);
      cout<<endl;
    }else{
      cin>>x;
      if(find(x)) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
  }
  return 0;
}

