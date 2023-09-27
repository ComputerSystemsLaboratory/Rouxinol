#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node {
  int key;
  struct node *next, *prev;
}Node;

void init(void);
void insert(int);
void deleteNode(Node *);
void deleteFirst(void);
void deleteLast(void);
void deleteKey(int);
Node * listSearch(int);

Node *nil;

Node* listSearch(int key){
  Node *cur=nil->next;
  while(cur!=nil&&cur->key!=key){
    cur=cur->next;
  }
  return cur;
}

void init(void) { 
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void printList(){
  Node *cur=nil->next;
  int isf=0;
  
  while(1){
    if(cur==nil) break;
    if(isf++>0) printf(" ");
    printf("%d",cur->key);
    cur=cur->next;
  }
  printf("\n");
}

void insert(int key) {
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

void deleteNode(Node *t) {
  if(t==nil) return;
  t->prev->next=t->next;
  t->next->prev=t->prev;
  free(t);
}

void deleteFirst(void) {
  deleteNode(nil->next);
}

void deleteLast(void) {
  deleteNode(nil->prev);
}

void deleteKey(int key){
  deleteNode(listSearch(key));
}

int main()
{
  int n,i,key,size=0,np=0,nd=0;
  char command[20];

  scanf("%d",&n);

  init();
  
  for(i=0;i<n;i++){
    scanf("%s %d",command,&key);
    if(strcmp(command,"insert")==0){
      insert(key);
      np++;
      size++;
    }else if(strcmp(command,"deleteFirst")==0){
      deleteFirst();
      size--;
    }else if(strcmp(command,"deleteLast")==0){
      deleteLast();
      size--;
    }else{
      deleteKey(key);
      nd++;
      size--;
    }
  }
  
  printList();

  return 0;
}