#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#define NILL 2000000010
using namespace std;
struct node{
  node *p, *l,*r;
  int key;
};
node *root;
 
node * mk_node(int key,node *l,node *r,node *p){
  node *n=(node *)malloc(sizeof(node));
  n->key=key;
  n->r=r;
  n->l=l;
  n->p=p;
  return n;
}
 
void insert(node *z){
  node *y=mk_node(NILL,NULL,NULL,NULL);
  node *x=root;

  while(x!=NULL){
    y=x;
    if((z->key)<(x->key)) x=x->l;
    else x=x->r;
  }
  z->p = y;

  if(y->key==NILL)root = z;
  else if(z->key < y->key) y->l=z;
  else y->r=z;
}

void In(node *pos){
  if(pos->l!=NULL)In(pos->l);
  cout <<" "<<pos->key;
  if(pos->r!=NULL)In(pos->r);
}

void Pre(node *pos){
  cout <<" "<<pos->key;
  if(pos->l!=NULL)Pre(pos->l);
  if(pos->r!=NULL)Pre(pos->r);
  
}
 
 
char str[1000];
int main(){
  root=mk_node(NILL,NULL,NULL,NULL);
  int n;
  cin>>n;

  while(n--){
    node *x=mk_node(NILL,NULL,NULL,NULL);
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&x->key);
      insert(x);
    }
    else if(str[0]=='p'){
      In(root);cout <<endl;
      Pre(root);cout <<endl;
    }
   
  }
  return 0;
}