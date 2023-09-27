#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

struct Node{
  int num;
  Node *right,*left;
};

Node *insert(Node *p,int x){
  if(p==NULL){
    Node *q=(Node *)malloc(sizeof(Node));
    q->num=x;
    q->right=q->left=NULL;
    return q;
  }else{
    if(x<p->num) p->left=insert(p->left,x);
    else p->right=insert(p->right,x);
    return p;
  }
}

bool find(Node *p,int x){
  if(p==NULL) return false;
  else if(x==p->num) return true;
  else if(x<p->num) return find(p->left,x);
  else return  find(p->right,x);
}


Node *deleteNode(Node *p,int x){
  if(p==NULL) return NULL;
  else if(x<p->num) p->left=deleteNode(p->left,x);
  else if(x>p->num) p->right=deleteNode(p->right,x);
  else if(p->left==NULL){
    Node *q=p->right;
    delete p;
    return q;
  }else if(p->left->right==NULL){
    Node *q=p->left;
    q->right=p->right;
    delete p;
    return q;
  }else{
    Node *q;
    for(q=p->left;q->right->right!=NULL;q=q->right);
    Node *r=q->right;
    q->right=r->left;
    r->left=p->left;
    r->right=p->right;
    delete p;
    return r;
  }
  return p;
}

void inorder(Node *T){
  if(T==NULL)return;
  inorder(T->left);
  cout<<" "<<T->num;
  inorder(T->right);
}

void preorder(Node *T){
  if(T==NULL) return;
  cout<<" "<<T->num;
  preorder(T->left);
  preorder(T->right);
}

int main(){
  int m,k;
  string s;
  struct Node *T;

  T=NULL;

  cin>>m;

  for(int i=0;i<m;i++){
    cin>>s;
    if(s=="insert"){
      cin>>k;
      T=insert(T,k);
    }else if(s=="find"){
      cin>>k;
      if(find(T,k)==false)cout<<"no"<<endl;
      else cout<<"yes"<<endl;
    }else if(s=="print"){
      inorder(T);
      cout<<endl;
      preorder(T);
      cout<<endl;
    }else if(s=="delete"){
      cin>>k;
      deleteNode(T,k);
    }
  }
  return 0;
}