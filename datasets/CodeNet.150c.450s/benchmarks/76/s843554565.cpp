#include<bits/stdc++.h>
using namespace std;
int f;

typedef struct node{
  node *p,*l,*r;
  int key;
} Node;

typedef Node* Nodepointer;

Nodepointer T;

void insert(int z){
  Nodepointer t=(Node*)malloc(sizeof(Node));
  t->l=NULL;
  t->r=NULL;
  t->key=z;
  if(!f){
    T->key=z;
    f=1;
    return;
  }
  Nodepointer y=NULL,x=T;
  while(x!=NULL){
    y=x;
    if(t->key<x->key)x=x->l;
    else x=x->r;
  }
  t->p=y;
  if(y==NULL)T=t;
  else if(t->key<y->key)y->l=t;
  else y->r=t;
}

bool find(int key){
  Nodepointer x=T;
  while(x!=NULL){
    if(x->key==key)return true;
    if(key<x->key)x=x->l;
    else x=x->r;
  }
  return false;
}

void print(Nodepointer x,int y){
  if(y)cout<<' '<<x->key;
  if(x->l!=NULL)print(x->l,y);
  if(!y)cout<<' '<<x->key;
  if(x->r!=NULL)print(x->r,y);
}

int main(){
  string s;
  int n,z;
  cin>>n;
  T=(Node*)malloc(sizeof(Node));
  T->p=NULL;
  T->l=NULL;
  T->r=NULL;
  while(n--){
    cin>>s;
    if(s=="insert")cin>>z,insert(z);
    else if(f&&s=="find"){
      cin>>z;
      if(find(z))cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
    else if(f){
      print(T,0);
      cout<<endl;
      print(T,1);
      cout<<endl;
    }
  }
  return 0;
}