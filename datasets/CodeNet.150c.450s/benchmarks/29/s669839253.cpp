#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Node{
  int key;
  Node *prev, *next;
};

Node *nil;

void init(){
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void insert(int key){
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

Node* listSearch(int key){
  Node *cur = nil->next;
  while(cur != nil && cur-> key != key){
    cur = cur->next;
  }
  return cur;
}

void deleteNode(Node *t){
  if(t == nil) return;
  t->prev->next = t->next;
  t->next->prev = t->prev;
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

void printList(){
  Node *cur = nil->next;
  while(cur != nil){
    cout << cur->key;
    if(cur->next != nil) cout << " ";
    cur = cur->next;
  }
  cout << endl;
}

int main(void){
  int n, key;
  char command[20];

  init();

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%s", command);
    if(command[0] == 'i'){
      scanf("%d", &key);
      insert(key);
    }else if(command[0] == 'd' && command[6] == '\0'){
      scanf("%d", &key);
      deleteKey(key);
    }else if(command[0] == 'd' && command[6] == 'F'){
      deleteFirst();
    }else if(command[0] == 'd' && command[6] == 'L'){
      deleteLast();
    }
  }

  printList();
  return 0;
}