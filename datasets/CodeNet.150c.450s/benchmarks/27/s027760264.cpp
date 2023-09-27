#include<iostream>
using namespace std;
#define M 500000

struct Node{
  int key;
  Node *p,*l,*r;
};

Node *root,*NIL;

void insert(int k){
  Node *b=NIL;
  Node *a=root;
  Node *c;

  c=(Node *)malloc(sizeof(Node));
  c->key=k;
  c->l=NIL;
  c->r=NIL;

  while(a!=NIL){
    b=a;
    if(c->key < a->key){
      a=a->l;
    }else{
      a=a->r;
    }
  }
  c->p=b;
  if(b==NIL){
    root=c;
  }else{
    if(c->key < b->key){
      b->l=c;;
    }else{
      b->r=c;;
    }
  }
}
  
void In(Node *x){
  if(x==NIL)return;
  In(x->l);
  cout<<" "<<x->key;
  In(x->r);
}

void Pre(Node *x){
  if(x==NIL)return;
  cout<<" "<<x->key;
  Pre(x->l);
  Pre(x->r);
}

int main(){
  int m,k,i;
  string order;

  cin>>m;
  for(i=0;i<m;i++){
    cin>>order;
    if(order== "insert"){
      cin>>k;
      insert(k);
  }
    if(order=="print"){
      In(root);
      cout<<endl;
      Pre(root);
      cout<<endl;
    }
  }
  return 0;
}

