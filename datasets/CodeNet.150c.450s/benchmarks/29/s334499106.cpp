#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

struct Node{
  int key;
  Node *next, *prev;
};
Node *nil;

void init() {
  nil = (Node*)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

Node* listSearch(int key) {
  Node *cur = nil->next;
  while(cur != nil && cur->key != key) {
    cur = cur->next;
  }
  return cur;
}

void printList() {
  Node *cur = nil->next;
  for(int i = 0; cur != nil; i++) {
    if(i > 0) printf(" ");
    printf("%d", cur->key);
    cur = cur->next;
  }
  printf("\n");
}

void deleteNode(Node *t) {
  if(t == nil) return;
  t->next->prev = t->prev;
  t->prev->next = t->next;
  free(t);
}

void deleteFirst() {
  deleteNode(nil->next);
}

void deleteLast() {
  deleteNode(nil->prev);
}

void deleteKey(int key) {
  deleteNode(listSearch(key));
}

void insert(int key) {
  Node *x = (Node*) malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  x->prev = nil;
  nil->next = x;
}

int main() {
  int key, n, i, j = 0;
  char com[20];
  scanf("%d", &n);
  init();
  for(i = 0; i < n; i++) {
    scanf("%s%d", com, &key);
    if(strcmp(com, "insert") == 0) {
      insert(key);
    } else if(strcmp(com, "delete") == 0) {
      deleteKey(key);
    } else if(strcmp(com, "deleteFirst") == 0) {
      deleteFirst();
    }else if(strcmp(com, "deleteLast") == 0){
      deleteLast();
    }
  }
  printList();

  return 0;
}

