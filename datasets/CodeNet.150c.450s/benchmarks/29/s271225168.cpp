#include <cstdio>
#include <cstdlib>
#include <cstring>

struct Node {
  int key;
  Node* prev;
  Node* next;
};

Node* nil;

void Init() {
  nil = (Node*)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void PrintList() {
  Node* cur = nil->next;
  int isf = 0;
  while (1) {
    if (cur == nil) break;
    if (isf++ > 0) printf(" ");
    printf("%d", cur->key);
    cur = cur->next;
  }
  printf("\n");
}

void Insert(int key) {
  Node* x = (Node*)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

Node* SearchNode(int key) {
  Node* cur = nil->next;
  while (cur != nil && cur->key != key) {
    cur = cur->next;
  }
  return cur;
}

void DeleteNode(Node* n) {
  if (n == nil) return;
  n->prev->next = n->next;
  n->next->prev = n->prev;
  free(n);
}

void Delete(int key) {
  DeleteNode(SearchNode(key));
}

void DeleteFirst() {
  DeleteNode(nil->next);
}

void DeleteLast() {
  DeleteNode(nil->prev);
}

int main() {
  int n;
  scanf("%d", &n);

  char cmd[16];
  int key;

  Init();
  for (int i = 0; i < n; i++) {
    scanf("%s", cmd);
    if (strcmp(cmd, "insert") == 0) {
      scanf("%d", &key);
      Insert(key);
    } else if (strcmp(cmd, "delete") == 0) {
      scanf("%d", &key);
      Delete(key);
    } else if (strcmp(cmd, "deleteFirst") == 0) {
      DeleteFirst();
    } else if (strcmp(cmd, "deleteLast") == 0) {
      DeleteLast();
    }
  }
  PrintList();

  return 0;
}
