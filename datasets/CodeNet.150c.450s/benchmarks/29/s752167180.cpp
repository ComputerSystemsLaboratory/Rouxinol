#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<string.h>
using namespace std;
struct Node {
  int key;
  Node *prev, *next;
};

Node *nil;
void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void insert(int key) {
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

Node* listSearch(int key) {
  Node *cur = nil->next;
  while ( cur != nil && cur->key != key ) {
    cur = cur->next;
  }
  return cur;
}

void deleteNode(Node *t) {
  if ( t == nil ) return;
  t->prev->next = t->next;
  t->next->prev = t->prev;
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

int main() {
  int n;
  scanf("%d", &n);

  init();

  for ( int i = 0; i < n; i++ ) {
    char str[12];
    int key;
    scanf("%s", str);
    if ( strcmp(str, "insert") == 0 ) {
      scanf("%d", &key);
      insert(key);
    } else if ( strcmp(str, "delete") == 0 ) {
      scanf("%d", &key);
      deleteKey(key);
    } else if ( strcmp(str, "deleteFirst") == 0 ) {
      deleteFirst();
    } else if ( strcmp(str, "deleteLast") == 0 ) {
      deleteLast();
    }
  }

  Node *cur = nil->next;
  printf("%d", cur->key);
  cur = cur->next;
  while ( cur != nil ) {
    printf(" %d", cur->key);
    cur = cur->next;
  }
  printf("\n");

  return 0;
}

