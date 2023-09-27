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

void print(node *pos, int flg){
  if(flg)cout <<" "<<pos->key;
  if(pos->l!=NULL)print(pos->l,flg);
  if(!flg)cout <<" "<<pos->key;
  if(pos->r!=NULL)print(pos->r,flg);
}

bool find(node *pos,int key){

  if(pos==NULL)return 0;

  if(pos->key>key) return find(pos->l,key);
  if(pos->key<key) return find(pos->r,key);
  return 1;
} 
 
char str[1000];
int main(){
  root=mk_node(NILL,NULL,NULL,NULL);
  int n;
  cin>>n;

  while(n--){
    node *x=mk_node(NILL,NULL,NULL,NULL);
    int a;
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&x->key);
      insert(x);
    }
    else if(str[0]=='p'){
      print(root,0);cout <<endl;
      print(root,1);cout <<endl;
    }
    else if(str[0]=='f'){
      cin>>a;
      cout <<(find(root,a)? "yes":"no")<<endl;
    }
  }
  return 0;
}