#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

struct Node {
  int key;
  Node *prev, *next;
};

Node* nil;

void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void insert(int key) {
  Node* x = (Node *)malloc(sizeof(Node));
  x->key = key;

  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

Node* listSearch(int key) {
  Node* cur = nil->next;
  while (cur != nil && cur->key != key) {
    cur = cur->next;
  }
  return cur;
}

void deleteNode(Node* t) {
  if (t == nil) return;
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

void printList() {
  Node* cur = nil->next;
  while (cur != nil) {
    cout << cur->key << ((cur->next != nil)? " " : "\n");
    cur = cur->next;
  }
}

int main() {
  init();
  int n;
  scanf("%d", &n);

  while (n--) {
    char command[10];
    int val;
    if (scanf("%s %d", command, &val) == EOF) {
      scanf("%s", command);
    }
    if (!strcmp(command, "insert")) {
      insert(val);
    } else if (!strcmp(command, "delete")) {
      deleteKey(val);
    } else if (!strcmp(command, "deleteFirst")) {
      deleteFirst();
    } else {
      deleteLast();
    }
  }

  printList();
}

