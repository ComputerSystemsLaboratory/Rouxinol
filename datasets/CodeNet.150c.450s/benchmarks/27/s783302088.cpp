#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
  int key;
  struct node *p;
  struct node *l;
  struct node *r;
};

typedef struct node *pointer;

node s;
pointer nil=&s;
pointer R=nil;


void insert(pointer z){
  pointer y=nil;
  pointer x=R;
  while(x!=nil){
    y=x;
    if(z->key < x->key)x=x->l;
    else x=x->r;
  }
  z->p=y;
  if(y==nil) R = z;
  else if(z->key < y->key) y->l= z;
  else y->r=z;
}


void print(pointer t,int pp){
  if(t==nil) return;
  if(pp)cout<<" "<<t->key;
  print(t->l,pp);
  if(!pp)cout<<" "<<t->key;
  print(t->r,pp);
}


int main(){
  int n;
  cin>>n;
  string str;
  for(int i=0;i<n;i++){
    cin>>str;
    if(str=="insert"){
      pointer   T=(pointer)malloc(sizeof(node));
      cin>>T->key;
      T->l=nil;
      T->r=nil;
      insert(T);
    }
    else if(str=="print"){
      print(R,0);
      cout<<endl;
      print(R,1);
      cout<<endl;
    }
  }
  



  return 0;
}