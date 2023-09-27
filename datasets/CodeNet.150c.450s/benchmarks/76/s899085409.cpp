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

Node *serch(Node *x,int k){
  while(x!=NIL && k!=x->key){
    if(k<x->key)x=x->l;
    else x=x->r;
  }
  return x;
}

int main(){
  int m,x,i;
  string order;

  cin>>m;
  for(i=0;i<m;i++){
    cin>>order;
    if(order== "find"){
      cin>>x;
      Node *t=serch(root,x);
      if(t!=NIL)cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }else
      if(order== "insert"){
	cin>>x;
	insert(x);
      }else
	if(order=="print"){
	  In(root);
	  cout<<endl;
	  Pre(root);
	  cout<<endl;
	}
  }
  return 0;
}

