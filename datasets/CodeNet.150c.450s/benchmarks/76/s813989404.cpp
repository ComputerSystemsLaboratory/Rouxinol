#include <iostream>
using namespace std;

typedef struct node{
  struct node *p,*r,*l;
  int key;
}Node;

Node *insert(Node *p,int key){
  Node *x,*y,*n;
  x=p;
  y=NULL;
  while(x!=NULL){
    y=x;
    if(x->key<=key)x=x->r;
    else x=x->l;
  }
  
  n=new Node;
  n->p=y;
  n->r=NULL;
  n->l=NULL;
  n->key=key;

  if (p==NULL)return n;
  if (y->key<=key) y->r=n;
  else y->l=n;
  return p;
}

void printA(Node *p){
  if (p==NULL) return;
  printA(p->l);
  cout << " " << p->key;
  printA(p->r);
}

void printB(Node *p){
  if (p==NULL) return;
  cout << " " << p->key;
  printB(p->l);
  printB(p->r);
}

void print(Node *p){
  printA(p);
  cout << endl;
  printB(p);
  cout << endl;
}

void find(Node *p,int key){
  Node *x=p;
  while(x!=NULL){
    if (x->key<key) x=x->r;
    else if (x->key>key) x=x->l;
    else {
      cout << "yes" << endl;
      return;
    }
  }
  cout << "no"<<endl;
}

int main(){
  int n,k;
  Node *root=NULL;
  char cmd[16];

  cin >> n;
  for (int i=0;i<n;i++){
    cin >> cmd;
    if (cmd[0]=='i'){
      cin >> k;
      root=insert(root,k);
    }else if (cmd[0]=='p'){
      print(root);
    }else if (cmd[0]=='f'){
      cin >> k;
      find(root,k);
    }//else if (cmd[0]==''){
    //}
  }
  
  return 0;
}