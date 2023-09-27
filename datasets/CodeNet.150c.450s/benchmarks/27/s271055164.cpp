#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
//NIL is NULL
#define NIL NULL

//Node structure
struct Node{
  int key;
  struct Node *parent;
  struct Node *leftc;
  struct Node *rightc;
};
//define Nodepointer
typedef struct Node * Nodepointer;

//root
Nodepointer root;

//function insert
void insert(int k){
  Nodepointer x,y,z;
  y=NIL;
  x=root;
  z=new struct Node();

  z->key=k;
  z->leftc=NIL;
  z->rightc=NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key) x=x->leftc;
    else x=x->rightc;
  } 
 
  z->parent=y;

  if(y==NIL) root=z;
   
  else if(z->key<y->key) y->leftc=z;

  else y->rightc=z;
 
 
}

//print
void inorderprint(Nodepointer now){
  if(now!=NIL){
    inorderprint(now->leftc);
    printf(" %d",now->key);
    inorderprint(now->rightc);
  }
}

void preorderprint(Nodepointer now){
  if(now!=NIL){
    printf(" %d",now->key);
    preorderprint(now->leftc);
    preorderprint(now->rightc);
  }
}



int main(){

  int n,i,j,data;
  char str[10];

  //load numbaer
  scanf("%d",&n);

  //load command
  for(i=0;i<n;i++){
    scanf("%s",str);
    //insert
    if(strcmp(str,"insert")==0) {
      scanf("%d",&data);
      insert(data);
    }
    //print
    else if(strcmp(str,"print")==0){
      inorderprint(root);
      cout <<endl;
      preorderprint(root);
      cout <<endl;
    }
  }

  return 0;
}