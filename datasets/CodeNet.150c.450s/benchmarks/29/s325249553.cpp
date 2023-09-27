#include<stdio.h>
#include<stdlib.h>

struct Node {
  int v;
  Node* prev;
  Node* next;
};

Node *nil;

void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil->prev = nil;
  nil->next = nil;
}

void insertNode(int x) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->v = x;
  nil->next->prev = node;
  node->next = nil->next;
  nil->next = node;
  node->prev = nil;
}

Node* search(int x) {
  Node *node = nil->next;
  while(node != nil) {
    if(node->v == x) return node;
    node = node->next;
  }
  return nil;
}

void deleteNode(Node* node) {
  if ( node != nil ) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
    free(node);
  }
}

void deleteAt(int x) {
  deleteNode(search(x));
}

void deleteFirst() {
  deleteNode(nil->next);
}

void deleteLast() {
  deleteNode(nil->prev);
}

int main() {
  int n, v;
  char com[12];

  scanf("%d", &n);
  init();

  while ( scanf("%s %d", com, &v) != EOF ) {
    if ( com[0] == 'i' ) {
      insertNode(v);
    } else if ( com[0] == 'd' ) {
      if ( com[6] == 'F' ) {
        deleteFirst();
      } else if ( com[6] == 'L' ) {
        deleteLast();
      } else {
        deleteAt(v);
      }
    }
  }

  Node *node = nil->next;
  int i = 0;
  while(node != nil) {
    if (i) printf(" ");
    printf("%d", node->v);
    node = node->next;
    i++;
  }

  printf("\n");

  return 0;
}

