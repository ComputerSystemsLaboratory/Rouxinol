#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;

struct Node{
  int key;
  Node *prev,*next;
};

Node *nil;

void init(){
  nil=(Node *)malloc(sizeof(Node));
  nil->next=nil;
  nil->prev=nil;
}

void insert(int key){
  Node *x=(Node *)malloc(sizeof(Node));
  x->key = key;
  x->next=nil->next;
  nil->next->prev=x;
  x->prev=nil;
  nil->next=x;
}

Node* listSearch(int key){
  Node *cur=nil->next;
  while(cur != nil && cur->key != key){
    cur=cur->next;
  }
  return cur;
}

void deleteNode(Node *t){
  if(t==nil) return;
  t->prev->next=t->next;
  t->next->prev=t->prev;
  free(t);
}

void deleteFirst(){
  deleteNode(nil->next);
}

void deleteLast(){
  deleteNode(nil->prev);
}

void deleteKey(int key){
  deleteNode(listSearch(key));
}

int main(){
  int n,key;
  char com[15];
  init();

  cin >> n;
  for(int i=0;i<n;i++){
    scanf("%s %d",com,&key);
    if(com[0]=='i'){
      insert(key);
    }
    else if(strlen(com)<7){
      deleteKey(key);
    }
    else if(com[6]=='F'){
      deleteFirst();
    }
    else if(com[6]=='L'){
      deleteLast();
    }
  }
  Node *x=nil->next;
  int j=0;
  while(x!=nil){
    if(j++>0) printf(" ");
    printf("%d",x->key);
    x=x->next;
  }
  cout << endl;
  return 0;
}