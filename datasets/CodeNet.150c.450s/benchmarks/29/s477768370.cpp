#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node *next, *prev;
};

Node *nil;

Node* listsearch(int key){
  Node *cur= nil->next;
  while(cur!=nil && cur->key != key){
    cur = cur -> next;
  }
  return cur;
}

void init(){
  nil=(Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void printlist(){
  Node *cur = nil->next;
  int isf=0;
  while(1){
    if(cur==nil)break;
    if(isf++ >0)printf(" ");
    printf("%d",cur->key);
    cur = cur->next;
  }
  printf("\n");
}

void deleteNode(Node *t){
  if(t==nil)return;
  t->prev->next = t->next;
  t->next->prev = t->prev;
  free(t);
}

void deletefirst(){
  deleteNode(nil->next);
}

void deletelast(){
  deleteNode(nil->prev);
}

void deletekey(int key){
  deleteNode(listsearch(key));
}

void insert(int key){
  Node *x = (Node *)malloc(sizeof(Node));
  x -> key =key;
  x -> next = nil -> next;
  nil -> next -> prev =x;
  nil -> next =x;
  x -> prev = nil;
}

int main(){
  int key,n,i;
  int size=0;
  char com[20];
  int np=0,nd=0;
  scanf("%d",&n);
  init();
  for(i=0;i<n;i++){
    scanf("%s%d",com,&key);
    if(com[0]=='i'){
      insert(key);
      np++;
      size++;
    }
    else if(com[0]=='d'){
      if(strlen(com)>6){
	if(com[6]=='F')deletefirst();
	else if(com[6]=='L')deletelast();
      }
      else{
	deletekey(key);
	nd++;
      }
      size--;
    }
  }

  printlist();

  return(0);
}